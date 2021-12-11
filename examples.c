#include <stdio.h>
#include "libft.h"

static void run_ft_memset_example();
static void run_ft_bzero_example();
static void run_ft_memcpy_example();
static void run_ft_memccpy_example();
static void run_ft_memmove_example();
static void run_ft_memcmp_example();
static void run_ft_memchr_example();
static void run_ft_strlen_example();
static void run_ft_strdup_example();
static void run_ft_strcpy_example();
static void run_ft_strncpy_example();
static void run_ft_strcat_example();
static void run_ft_strncat_example();
static void run_ft_strlcat_example();
static void run_ft_strchr_example();
static void run_ft_strrchr_example();
static void run_ft_strstr_example();
static void run_ft_strnstr_example();
static void run_ft_strcmp_example();
static void run_ft_strncmp_example();

int main() {
    run_ft_memset_example();
    run_ft_bzero_example();
    run_ft_memcpy_example();
    run_ft_memccpy_example();
    run_ft_memmove_example();
    run_ft_memcmp_example();
    run_ft_memchr_example();
    run_ft_strlen_example();
    run_ft_strdup_example();
    run_ft_strcpy_example();
    run_ft_strncpy_example();
    run_ft_strcat_example();
    run_ft_strncat_example();
    run_ft_strlcat_example();
    run_ft_strchr_example();
    run_ft_strrchr_example();
    run_ft_strstr_example();
    run_ft_strnstr_example();
    run_ft_strcmp_example();
    run_ft_strncmp_example();
    return 0;
}

static void run_ft_memset_example() {
    printf("--- ft_memset ---------------------------------------------------------\n");
    printf("Copies the value ch (after conversion to unsigned char as if by (unsigned char)ch)\n");
    printf("into each of the first count characters of the object pointed to by dest.\n\n");
    char str[] = "hello world";
    printf("Before: %s\n", str);
    ft_memset(str, 'a', 3);
    printf("Function call: ft_memset(str, 'a', 3);\n");
    printf("After: %s\n\n", str);
}

static void run_ft_bzero_example() {
    printf("--- ft_bzero ----------------------------------------------------------\n");
    printf("Erases the data in the n bytes of the memory starting at the location pointed\n");
    printf("to by str, by writing zeros (bytes containing '\\0') to that area.\n\n");
    char str[] = "hello world";
    printf("Before: %s\n", str);
    ft_bzero(str, sizeof(str));
    printf("Function call: ft_bzero(str, sizeof(str));\n");
    printf("After: %s (was erased)\n\n", str);
}

static void run_ft_memcpy_example() {
    printf("--- ft_memcpy ---------------------------------------------------------\n");
    printf("Copies count characters from the object pointed to by src to the object\n");
    printf("pointed to by dest. Both objects are interpreted as arrays of unsigned char.\n\n");
    char src[] = "hello world";
    char dest[12];
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_memcpy(dest, src, sizeof(src));
    printf("Function call: ft_memcpy(dest, src, sizeof(src));\n");
    printf("After: src = %s, dest = %s\n\n", src, dest);
}

static void run_ft_memccpy_example() {
    printf("--- ft_memccpy --------------------------------------------------------\n");
    printf("Copies characters from the object pointed to by src to the object pointed\n");
    printf("to by dest, stopping after any of the next two conditions are satisfied:\n");
    printf("    - count characters are copied\n");
    printf("    - the character (unsigned char)c is found (and copied)\n\n");
    char src[] = "hello world";
    char dest[12] = {'\0'};
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_memccpy(dest, src, ' ', sizeof src);
    printf("Function call: ft_memccpy(dest, src, ' ', sizeof src);\n");
    printf("After: src = %s, dest = %s\n\n", src, dest);
}

static void run_ft_memmove_example() {
    printf("--- ft_memmove --------------------------------------------------------\n");
    printf("Copies count characters from the object pointed to by src to the object\n");
    printf("pointed to by dest. Both objects are interpreted as arrays of unsigned char.\n");
    printf("The objects may overlap: copying takes place as if the characters were\n");
    printf("copied to a temporary character array and then the characters were copied\n");
    printf("from the array to dest.\n\n");
    char src[] = "hello world";
    char dest[12] = {'\0'};
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_memmove(dest, src, sizeof(src));
    printf("Function call: ft_memmove(dest, src, sizeof(src));\n");
    printf("After: src = %s, dest = %s\n\n", src, dest);
}

static void run_ft_memcmp_example() {
    printf("--- ft_memcmp ---------------------------------------------------------\n");
    printf("Compares the first count characters of the objects pointed to by lhs and rhs.\n");
    printf("The comparison is done lexicographically.\n\n");
    char lhs[] = "hello world";
    char rhs[] = "hello world!";
    printf("Parameters: lhs = %s, rhs = %s\n", lhs, rhs);
    int result = ft_memcmp(lhs, rhs, sizeof(lhs));
    printf("Function call: ft_memcmp(lhs, rhs, sizeof(lhs));\n");
    printf("Result: %i\n\n", result);
}

static void run_ft_memchr_example() {
    printf("--- ft_memchr ---------------------------------------------------------\n");
    printf("Finds the first occurrence of ch (after conversion to unsigned char as\n");
    printf("if by (unsigned char)ch) in the initial count characters\n");
    printf("(each interpreted as unsigned char) of the object pointed to by ptr.\n\n");
    char str[] = "hello world";
    printf("Parameters: str = %s\n", str);
    void *result = ft_memchr(str, 'w', 11);
    printf("Function call: ft_memchr(str, 'w', 11);\n");
    printf("Result: %s\n\n", result);
}

static void run_ft_strlen_example() {
    printf("--- ft_strlen ---------------------------------------------------------\n");
    printf("Returns the length of the given null-terminated byte string, that is,\n");
    printf("the number of characters in a character array whose first element is\n");
    printf("pointed to by str up to and not including the first null character.\n\n");
    char str[] = "hello world";
    printf("Parameters: str = %s\n", str);
    size_t ans = ft_strlen(str);
    printf("Function call: ft_strlen(str);\n");
    printf("Result: %i\n\n", ans);
}

static void run_ft_strdup_example() {
    printf("--- ft_strdup ---------------------------------------------------------\n");
    printf("Returns a pointer to a null-terminated byte string, which is a duplicate\n");
    printf("of the string pointed to by str1.\n\n");
    char str1[] = "hello world";
    printf("Parameters: str1 = %s\n", str1);
    char *str2 = ft_strdup(str1);
    printf("Function call: ft_strdup(str1);\n");
    printf("Return: %s\n\n", str2);
    free(str2);
}

static void run_ft_strcpy_example() {
    printf("--- ft_strcpy ---------------------------------------------------------\n");
    printf("Copies the null-terminated byte string pointed to by src, including the\n");
    printf("null terminator, to the character array whose first element is pointed to by dest.\n\n");
    char src[] = "hello world";
    char dest[12] = {'\0'};
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_strcpy(dest, src);
    printf("Function call: ft_strcpy(dest, src);\n");
    printf("After: dest = %s\n\n", dest);
}

static void run_ft_strncpy_example() {
    printf("--- ft_strncpy --------------------------------------------------------\n");
    printf("Copies at most count characters of the character array pointed to by src\n");
    printf("(including the terminating null character, but not any of the characters\n");
    printf("that follow the null character) to character array pointed to by dest.\n\n");
    char src[] = "hello world";
    char dest[12] = {'\0'};
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_strncpy(dest, src, 12);
    printf("Function call: ft_strncpy(dest, src, 12);\n");
    printf("After: dest = %s\n\n", dest);
}

static void run_ft_strcat_example() {
    printf("--- ft_strcat ---------------------------------------------------------\n");
    printf("Appends a copy of the null-terminated byte string pointed to by src to\n");
    printf("the end of the null-terminated byte string pointed to by dest.\n");
    printf("The character src[0] replaces the null terminator at the end of dest.\n");
    printf("The resulting byte string is null-terminated.\n\n");
    char dest[12] = "hello ";
    char src[] = "world";
    printf("Before: src = %s, dest = %s\n", src, dest);
    ft_strcat(dest, src);
    printf("Function call: ft_strcat(dest, src);\n");
    printf("After: dest = %s\n\n", dest);
}

static void run_ft_strncat_example() {
    printf("--- ft_strncat --------------------------------------------------------\n");
    printf("Appends at most count characters from the character array pointed to by\n");
    printf("src, stopping if the null character is found, to the end of the\n");
    printf("null-terminated byte string pointed to by dest. The character src[0]\n");
    printf("replaces the null terminator at the end of dest. The terminating null\n");
    printf("character is always appended in the end (so the maximum number of bytes\n");
    printf("the function may write is count+1).\n\n");
    char dest[12] = "hello ";
    char src[] = "world";
    printf("Before: src = %s, dest = %s\n", src, dest);
    ft_strncat(dest, src, 3);
    printf("Function call: ft_strncat(dest, src, 3);\n");
    printf("After: dest = %s\n\n", dest);
}

static void run_ft_strlcat_example() {
    printf("--- ft_strlcat --------------------------------------------------------\n");
    printf("The strlcat() function appends the NUL-terminated string src to the end\n");
    printf("of dest. It will append at most size - strlen(dst) - 1 bytes,\n");
    printf("NUL-terminating the result.\n\n");
    char dest[12] = "hello ";
    char src[] = "world";
    printf("Before: src = %s, dest = %s\n", src, dest);
    ft_strlcat(dest, src, 12);
    printf("Function call: ft_strlcat(dest, src, 12);\n");
    printf("After: dest = %s\n\n", dest);
}

static void run_ft_strchr_example() {
    printf("--- ft_strchr ---------------------------------------------------------\n");
    printf("Finds the first occurrence of ch (after conversion to char as if by\n");
    printf("(char)ch) in the null-terminated byte string pointed to by str (each\n");
    printf("character interpreted as unsigned char). The terminating null character\n");
    printf("is considered to be a part of the string and can be found when searching\n");
    printf("for '\\0'.\n\n");
    const char *str = "hello world";
    char ch = 'l';
    char *result = ft_strchr(str, ch);
    printf("Before: str = %s, ch = %c\n", str, ch);
    printf("Function call: ft_strchr(str, ch);\n");
    printf("After: result = %c (%p)\n\n", *result, result);
}

static void run_ft_strrchr_example() {
    printf("--- ft_strrchr --------------------------------------------------------\n");
    printf("Finds the last occurrence of ch (after conversion to char as if by\n");
    printf("(char)ch) in the null-terminated byte string pointed to by str (each\n");
    printf("character interpreted as unsigned char). The terminating null character\n");
    printf("is considered to be a part of the string and can be found if searching\n");
    printf("for '\\0'.\n\n");
    const char *str = "hello world";
    char ch = 'l';
    char *result = ft_strrchr(str, ch);
    printf("Before: str = %s, ch = %c\n", str, ch);
    printf("Function call: ft_strrchr(str, ch);\n");
    printf("After: result = %c (%p)\n\n", *result, result);
}

static void run_ft_strstr_example() {
    printf("--- ft_strstr ---------------------------------------------------------\n");
    printf("Finds the first occurrence of the null-terminated byte string pointed to\n");
    printf("by substr in the null-terminated byte string pointed to by str.\n\n");
    char *str = "one two three";
    char *result = ft_strstr(str, "two");
    printf("Variables: str = %s\n", str);
    printf("Function call: ft_strstr(str, \"two\");\n");
    printf("After: result = %c (%p)\n\n", *result, result);
}

static void run_ft_strnstr_example() {
    printf("--- ft_strnstr --------------------------------------------------------\n");
    printf("The strnstr() function locates the first occurrence of the null-termi-nated\n");
    printf("string substr in the string str, where not more than count characters are\n");
    printf("searched.\n\n");
    char *str = "one two three";
    char *result = ft_strnstr(str, "two", 8);
    printf("Variables: str = %s\n", str);
    printf("Function call: ft_strnstr(str, \"two\", 8);\n");
    printf("After: result = %c (%p)\n\n", *result, result);
}

static void run_ft_strcmp_example() {
    printf("--- ft_strcmp ---------------------------------------------------------\n");
    printf("Compares two null-terminated byte strings lexicographically.\n\n");
    char *lhs = "Hello World!";
    char *rhs = "Hello World!";
    int result = ft_strcmp(lhs, rhs);
    printf("Variables: lhs = %s, rhs = %s\n", lhs, rhs);
    printf("Function call: ft_strcmp(lhs, rhs);\n");
    printf("After: result = %d\n\n", result);
}

static void run_ft_strncmp_example() {
    printf("--- ft_strncmp --------------------------------------------------------\n");
    printf("Compares at most count characters of two possibly null-terminated arrays.\n");
    printf("The comparison is done lexicographically. Characters following the null\n");
    printf("character are not compared.\n\n");
    char *lhs = "Hello World!";
    char *rhs = "Hello";
    int result = ft_strncmp(lhs, rhs, 5);
    printf("Variables: lhs = %s, rhs = %s\n", lhs, rhs);
    printf("Function call: ft_strncmp(lhs, rhs, 5);\n");
    printf("After: result = %d\n\n", result);
}
