#include <stdbool.h>
#include <stddef.h>

#define assert_string(string1, string2, size) compare_strings(string1, string2, size, __FILE__, __LINE__)

void compare_strings(char string1[], char string2[], size_t size, char caller[], int line);
