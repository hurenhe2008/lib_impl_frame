#ifndef _TEST_ERROR_H_
#define _TEST_ERROR_H_


/*define user's error code start value, must enough large 
  avoid to conflict with c error code.*/
#define ERR_USER_V       100000

/*define user's error code, use errno to assign value*/
#define TEST_ERR_TEST1   (ERR_USER_V + 1)

#define TEST_ERR_TEST2   (ERR_USER_V + 2)

#define TEST_ERR_TEST3   (ERR_USER_V + 3)

#define TEST_ERR_TEST4   (ERR_USER_V + 4)

#define TEST_ERR_TEST5   (ERR_USER_V + 5)

#define TEST_ERR_TEST6   (ERR_USER_V + 6)

#define TEST_ERR_TEST7   (ERR_USER_V + 7)

#define TEST_ERR_TEST8   (ERR_USER_V + 8)

#define TEST_ERR_TEST9   (ERR_USER_V + 9)

/*............. and so on .............*/

#include <errno.h>

extern int test_errno();

extern const char* test_error_str();


#endif //_TEST_ERROR_H_