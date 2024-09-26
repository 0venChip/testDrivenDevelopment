#include <stdio.h>
#include <assert.h>
#include "CppUTest/TestHarness.h"

extern "C"{
    #include "my_sum.h"
}
TEST_GROUP(TestMySum){
void setup()
{
    //this gets run befro test setup
}
void teardown() {
    // this gets run after tests
}
};

TEST(TestMySum, Test_mysumBasisc)
{
    LONGS_EQUAL(7,my_sum(3,4));
}
