#include "test.h"
#include "test_error.h"


int test_init(test_ctx_t *ctx)
{
    if (!ctx) {
        errno = TEST_ERR_TEST1;
        return -1;
    }

    /*init true*/
    return 0;
}

int test_unit(test_ctx_t *ctx)
{
    if (!ctx) {
        errno = TEST_ERR_TEST1; 
        return -1;
    }

    /*unit true*/
    return 0;
}