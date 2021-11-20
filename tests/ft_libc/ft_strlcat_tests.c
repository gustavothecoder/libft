#include "tests.h"

void run_ft_strlcat_tests() {
    size_t dest_sz = 37;
    char dest[37] = "First part ";
    char src1[] = "| Second part ";
    char src2[] = "| Last part";

    size_t result = ft_strlcat(dest, src1, dest_sz);

    assert_array(dest, "First part | Second part \0", 26);
    assert(result == 26);

    result = ft_strlcat(dest, src2, dest_sz);

    assert_array(dest, "First part | Second part | Last part\0", dest_sz);
    assert(result == dest_sz);
}
