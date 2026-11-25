#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int parse_score(const char *text, int *score)
{
    char *end;
    long value;
    errno = 0;
    value = strtol(text, &end, 10);
    if (end == text || errno == ERANGE || value < INT_MIN || value > INT_MAX) {
        return 0;
    }
    *score = (int)value;
    return 1;
}

int main(void)
{
    FILE *file = fopen("students.csv", "r");
    char line[1024];
    if (file == NULL) {
        puts("Error: Could not find students.csv!");
        return 1;
    }

    puts("--- Processing Student Records ---");
    while (fgets(line, sizeof line, file) != NULL) {
        char *fields[4];
        char *cursor = line;
        size_t field_count = 1;
        char *newline = strchr(line, '\n');
        int s1, s2, s3;

        if (newline != NULL) {
            *newline = '\0';
        }
        if (line[0] == '\0') {
            continue;
        }

        fields[0] = line;
        while (*cursor != '\0') {
            if (*cursor == ',' && field_count < 4) {
                *cursor = '\0';
                fields[field_count++] = cursor + 1;
            }
            cursor++;
        }
        if (field_count == 4 && parse_score(fields[1], &s1) &&
            parse_score(fields[2], &s2) && parse_score(fields[3], &s3)) {
            printf("%s -> Average: %.6g\n", fields[0],
                   (s1 + s2 + s3) / 3.0);
        } else {
            printf("WARNING: Skipping malformed record for %s "
                   "(Invalid score data).\n", fields[0]);
        }
    }

    fclose(file);
    puts("\n--- Processing Complete ---");
    return 0;
}
