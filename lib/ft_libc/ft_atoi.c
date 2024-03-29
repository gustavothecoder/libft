#include "../../libft.h"

static int is_valid(const char *valid_chars, const char c);
static int to_int(const char *number);

int ft_atoi(const char *str)
{
    char number[11];
    int number_found = 0;
    int i = 0;
    char valid_chars[12] = {'-'};
    ft_strcat(valid_chars, DIGITS);
    for (; *str != '\0'; str++)
    {
        if (is_valid(valid_chars, *str))
        {
            number_found = 1;
            for (i; is_valid(valid_chars, *str); str++, i++)
            {
                number[i] = *str;
            }
            number[i] = '\0';
            break;
        }
    }
    return number_found ? to_int(number) : 0;
}

static int is_valid(const char *valid_chars, const char c)
{
    char c_array[1] = {c};
    return ft_strnstr(valid_chars, c_array, 10) != NULL ? 1 : 0;
}

static int to_int(const char *number)
{
    int multiplier_i = ft_strlen(number);
    int result = 0;
    int negative = 0;
    for (multiplier_i; *number != '\0' && multiplier_i <= 10; number++, multiplier_i--)
    {
        if (*number == '-')
        {
            negative = 1;
            continue;
        }
        result += (*number - '0') * INT_NUMERICAL_SYSTEM[multiplier_i];
    }
    return negative ? -result : result;
}
