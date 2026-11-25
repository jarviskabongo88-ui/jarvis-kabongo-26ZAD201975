#include <stdio.h>

static int read_file_with_return_code(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }
    fclose(file);
    return 1;
}

static int read_file_with_error(const char *filename, char *error_message,
                                size_t error_message_size)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        (void)snprintf(error_message, error_message_size,
                       "File not found: %s", filename);
        return 0;
    }
    fclose(file);
    return 1;
}

int main(void)
{
    char error_message[256];
    puts("--- Testing Return Code Strategy ---");
    if (!read_file_with_return_code("data.txt")) {
        puts("Return Code: Handled error gracefully. Program continues.");
    }

    puts("\n--- Testing Exception Strategy ---");
    if (!read_file_with_error("data.txt", error_message, sizeof error_message)) {
        printf("Exception Caught: %s\n", error_message);
        puts("Exception Strategy: Forced us to handle the error!");
    }
    return 0;
}
