#include <stdio.h>

#include "arithmetic/arithmetic.h"
#include "tempconverter/tempconverter.h"
#include "unity/unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_CAN_ADD_CORRECTLY(void){
    double result = add(1, 2);

    TEST_ASSERT_EQUAL(3, result);
}

void test_CAN_CONVERT_TEMP_CORRECTLY(void){
    double result = celsius_to_fahrenheit(100.0);

    TEST_ASSERT_EQUAL(212, result);
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_CAN_ADD_CORRECTLY);
    RUN_TEST(test_CAN_CONVERT_TEMP_CORRECTLY);
    return UNITY_END();
}