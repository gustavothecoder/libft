#include "tests.h"

void run_g_memset_tests() {
    char str[] = "ghghghghghghghghghghgh";
    g_memset(&str, 'a', 5);
    assert_string(str,  "aaaaahghghghghghghghgh", 22);
}
