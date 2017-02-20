#ifndef _TEST_H_
#define _TEST_H_

#if defined(__cplusplus)
extern "C"
{
#endif 

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
extern int test_init(test_ctx_t *ctx); 

extern int test_unit(test_ctx_t *ctx);


#if defined(__cplusplus)
}
#endif

#endif //_TEST_H_