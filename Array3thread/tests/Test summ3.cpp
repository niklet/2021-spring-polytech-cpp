#include "gtest/gtest.h"
#include "functions.h"

TEST(Full_Enumeration, easy) {
    int size = 6;
    int array[] = {1,2,3,4,5,6};
    EXPECT_EQ(SumArray3(array,size),21);

}
