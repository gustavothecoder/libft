#include <stdbool.h>
#include <stddef.h>

#define assert_string(string1, string2, size) compare_strings(string1, string2, size, __FILE__, __LINE__)
#define assert_null(target) check_null(target, __FILE__, __LINE__)

void compare_strings(char string1[], char string2[], size_t size, char caller[], int line);
void check_null(void *target, char caller[], int line);
