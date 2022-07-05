#include "../../libft.h"

static size_t count_substrings(char const *s, size_t s_size, char c);
static int non_c_char(char current, char c);
static int substring_not_finalized(char current, char c);
static void free_previous_allocations(char **allocations, size_t last);

char **ft_strsplit(char const *s, char c)
{
    size_t s_size = ft_strlen(s);
    size_t substrings_count = count_substrings(s, s_size, c);

    size_t j = 0, k, l;
    int start, end;
    char *substrings[substrings_count];
    for (size_t i = 0; i < s_size; i++)
    {
        if (non_c_char(s[i], c))
        {
            start = i;
            while (substring_not_finalized(s[i], c))
                i++;
            end = i;

            substrings[j] = ft_memalloc((end - (start - 1)) * sizeof(char));
            if (substrings[j] == NULL)
            {
                free_previous_allocations(substrings, j - 1);
                return NULL;
            }

            for (k = 0, l = start; l < end; k++, l++)
                substrings[j][k] = s[l];
            j++;
        }
    }

    char **result = substrings;
    return result;
}

static size_t count_substrings(char const *s, size_t s_size, char c)
{
    size_t counter = 0;
    for (size_t i = 0; i < s_size; i++)
    {
        if (non_c_char(s[i], c))
        {
            counter++;
            while (substring_not_finalized(s[i], c))
                i++;
        }
    }
    return counter;
}

static int non_c_char(char current, char c)
{
    return current != c ? 1 : 0;
}

static int substring_not_finalized(char current, char c)
{
    return non_c_char(current, c) && current != '\0' ? 1 : 0;
}

static void free_previous_allocations(char **allocations, size_t last)
{
    for (size_t i = last; i >= 0; i--)
        free(&allocations[i]);
}
