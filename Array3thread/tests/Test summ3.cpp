#include "gtest/gtest.h"
#include "functions.h"

TEST(Full_Enumeration, easy) {
    int size = 6;
    int array[] = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(SumArray3(array, size), 21);
    EXPECT_EQ(SumArray3(array, size - 1), 15);
    EXPECT_EQ(SumArray3(array, size - 2), 10);
    EXPECT_EQ(SumArray3(array, size - 3), 6);
    EXPECT_EQ(SumArray3(array, size - 4), 3);
    EXPECT_EQ(SumArray3(array, size - 5), 1);
}

TEST(Full_Enumeration, null) {
    int size = 10;
    int array[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EXPECT_EQ(SumArray3(array, size), 0);
    EXPECT_EQ(SumArray3(array, size - 3), 0);
    EXPECT_EQ(SumArray3(array, size - 6), 0);
    EXPECT_EQ(SumArray3(array, size - 9), 0);
}

TEST(Full_Enumeration, ones) {
    int size = 32;
    int array[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EXPECT_EQ(SumArray3(array, size), 32);
    EXPECT_EQ(SumArray3(array, size / 2), 16);
    EXPECT_EQ(SumArray3(array, size / 4), 8);
    EXPECT_EQ(SumArray3(array, size / 8), 4);
}