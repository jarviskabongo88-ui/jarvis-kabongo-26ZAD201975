#include <stdio.h>

int main(void)
{
    int age;
    int has_ticket;
    int is_member;
    int is_banned;
    int has_parent;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        return 1;
    }
    printf("Do you have a ticket? (1 for yes, 0 for no): ");
    if (scanf("%d", &has_ticket) != 1) {
        return 1;
    }
    printf("Are you a member? (1 for yes, 0 for no): ");
    if (scanf("%d", &is_member) != 1) {
        return 1;
    }
    printf("Are you banned? (1 for yes, 0 for no): ");
    if (scanf("%d", &is_banned) != 1) {
        return 1;
    }
    printf("do you have a parent(1 for yes, 0 for no): ");
    if (scanf("%d", &has_parent) != 1) {
        return 1;
    }

    if ((age >= 18 && has_ticket && !is_banned) ||
        (is_member && !is_banned) || (age >= 16 && has_parent)) {
        puts("You can enter the event.");
    } else {
        puts("sorry, You cannot enter.");
    }
    return 0;
}
