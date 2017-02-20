#include "test_version.h"
#include <stdio.h>

#define VERSION_STR_SIZE    10

static char s_ver_str[VERSION_STR_SIZE] = { 0 };
static int  s_binit = 0;


const char* test_version()
{
    if (s_binit) {
        return s_ver_str;
    }

    sprintf_s(s_ver_str, sizeof s_ver_str, "%d.%d.%d", 
        TEST_VERSION_MAJOR,
        TEST_VERSION_MINOR, 
        TEST_VERSION_PATCH);

    s_binit = 1;

    return s_ver_str;
}