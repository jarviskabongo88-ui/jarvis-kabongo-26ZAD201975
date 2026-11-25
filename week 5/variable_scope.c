#include <stdio.h>

static int globalcounter = 100;

static void display_global(void)
{
    printf("inside displayglobal:global counter = %d\n", globalcounter);
}

static void modify_global(void)
{
    globalcounter = 500;
    printf("inside modifyglobal:global counter = %d\n", globalcounter);
}

static void local_demo(void)
{
    int globalcounter = 999;
    printf("inside localDemo:global counter = %d\n", globalcounter);
}

int main(void)
{
    int localcounter = 50;
    printf("in main:local counter = %d\n", localcounter);
    printf("in main:global counter = %d\n", globalcounter);
    display_global();
    modify_global();
    local_demo();
    printf("back in main:global counter = %d\n", globalcounter);
    return 0;
}
