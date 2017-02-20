#ifndef _TEST_H_
#define _TEST_H_

#include "test_version.h"
#include "test_error.h"

#if defined(_WIN32) || defined(_WIN64) 
#include "test_win.h"
#else
#include "test_unix.h"
#endif


/*struct type*/
typedef test_ctx_s   test_ctx_t;



/*interface function*/
int test_init(test_ctx_t *ctx); 

int test_unit(test_ctx_t *ctx);



#endif //_TEST_H_