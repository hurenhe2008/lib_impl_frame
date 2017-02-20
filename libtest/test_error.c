#include "test_error.h"
#include <string.h>

int test_errno()
{
    return errno;
}

const char* test_error_str()
{
    int err = errno;

    switch (err) {
    case TEST_ERR_TEST1: 
        return "test error test1";

    case TEST_ERR_TEST2:
        return "test error test2";

    case TEST_ERR_TEST3:
        return "test error test3";

    case TEST_ERR_TEST4:
        return "test error test4";

    case TEST_ERR_TEST5:
        return "test error test5";

    case TEST_ERR_TEST6:
        return "test error test6";

    case TEST_ERR_TEST7:
        return "test error test7";

    case TEST_ERR_TEST8:
        return "test error test8";

    case TEST_ERR_TEST9:
        return "test error test9";

    default: 
       return strerror(err);
    }
}