#ifndef _TEST_VERSION_H_
#define _TEST_VERSION_H_


#define TEST_VERSION_MAJOR     1
#define TEST_VERSION_MINOR     0
#define TEST_VERSION_PATCH     0


#define TEST_VERSION_DEC     ((TEST_VERSION_MAJOR * 10000) +    \
                              (TEST_VERSION_MINOR * 100)   +    \
                              (TEST_VERSION_PATCH))


#define TEST_VERSION_HEX     ((TEST_VERSION_MAJOR << 16) |      \
                              (TEST_VERSION_MINOR << 8)  |      \
                              (TEST_VERSION_PATCH))


extern const char* test_version();


#endif //_TEST_VERSION_H_