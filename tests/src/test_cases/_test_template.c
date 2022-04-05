/* Prevent ISO C error: empty translation unit */
typedef int dummy_var;

#if LV_BUILD_TEST
#include "../lvgl.h"

#include "unity/unity.h"

void setUp(void)
{
    /* Function run before every test */
}

void tearDown(void)
{
    /* Function run after every test */
}

void test_func_1(void)
{
    TEST_FAIL();
}

#endif
