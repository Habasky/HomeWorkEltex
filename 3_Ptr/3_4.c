#include <stdio.h>
#include <string.h>

char *s21_strstr(const char *s1, const char *s2);

int main(void) {

    char string1[1024];
    char string2[1024];
    char *string2_ptr;

    fgets(string1, 1024, stdin);
    strcpy(string1, strtok(string1, "\n"));
    fgets(string2, 1024, stdin);
    strcpy(string2, strtok(string2, "\n"));

    string2_ptr = s21_strstr(string1, string2);

    printf("%p", string2_ptr);

    //printf("%s", s21_strstr(string1, string2));
    

    return 1;
}

char *s21_strstr(const char *s1, const char *s2) {
    while (*s1) {
        const char *start = s1;
        const char *s = s1;
        const char *n = s2;

        while (*s && *n && (*s == *n)) {
            s++;
            n++;
        }

        if (!*n) {
            return (char *)start;
        }
        s1++;
    }
    return NULL;
}