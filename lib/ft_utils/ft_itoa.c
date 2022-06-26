#include "ft_utils.h"

static int to_positive(int n);
static int find_number_of_digits(int n);

char *ft_itoa(int n)
{
    int negative = n < 0 ? 1 : 0;
    int temp_n = negative ? to_positive(n) : n;

    // +1 for the '\0'
    int number_of_digits = find_number_of_digits(n) + 1;
    if (negative)
        number_of_digits++;

    char *converted_n = ft_memalloc(number_of_digits * (sizeof(char)));
    if (converted_n == NULL)
        return NULL;

    converted_n[number_of_digits - 1] = '\0';
    for (int i = number_of_digits - 2; i >= 0; i--)
    {
        if (i == 0 && negative)
        {
            converted_n[i] = '-';
        }
        else if (temp_n != 0)
        {
            converted_n[i] = (temp_n % 10) + '0';
            temp_n /= 10;
        }
    }

    return converted_n;
}

static int to_positive(int n)
{
    return n * -1;
}

static int find_number_of_digits(int n)
{
    int answer = 0;
    for (int i = 1; i < INT_NUMERICAL_SYSTEM_SIZE; i++)
    {
        if (n / INT_NUMERICAL_SYSTEM[i] != 0)
            answer = i;
        else
            break;
    }
    return answer;
}
