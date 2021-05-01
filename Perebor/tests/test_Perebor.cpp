#include "gtest/gtest.h"
#include "functions.h"

TEST(Full_Enumeration, easy) {
    double Weight[] = {1, 10, 10};
    double Cost[] = {5, 10, 10};
    EXPECT_EQ(full_enumeration(3, 20, Weight, Cost), 20);
    EXPECT_EQ(full_enumeration(3, 1, Weight, Cost), 5);
    EXPECT_EQ(full_enumeration(3, 2, Weight, Cost), 5);
    EXPECT_EQ(full_enumeration(3, 11, Weight, Cost), 15);
    EXPECT_EQ(full_enumeration(3, 21, Weight, Cost), 25);
    EXPECT_EQ(full_enumeration(3, 23, Weight, Cost), 25);//Моментально

}

TEST(Full_Enumeration, normal1) {
    double Weight[] = {5, 7, 4, 1};
    double Cost[] = {3, 6, 2, 1};
    EXPECT_EQ(full_enumeration(4, 10, Weight, Cost), 7);//Моментально
}

TEST(Full_Enumeration, normal2) {
    double Weight[] = {20, 40, 33, 21, 15};
    double Cost[] = {5, 6, 2, 8, 9};
    EXPECT_EQ(full_enumeration(5, 100, Weight, Cost), 28);//Моментально

}

TEST(Full_Enumeration, normal3) {
    double Weight[] = {15.80, 3.70, 7.70, 10.10, 4.30, 17.70};
    double Cost[] = {10, 5, 23, 13, 8, 20};
    EXPECT_EQ(full_enumeration(6, 23.70, Weight, Cost), 44);//Моментально

}

TEST(Full_Enumeration, HARD1) {
    double Weight[] = {11, 33, 27, 39, 40, 31, 6, 55, 35, 19};
    double Cost[] = {5, 6, 2, 8, 10, 13, 4, 9, 4, 6};
    EXPECT_EQ(full_enumeration(10, 200, Weight, Cost), 53);//1 милисекунд
}

TEST(Full_Enumeration, Hard2) {
    double Weight[] = {11, 33, 27, 39, 40, 31, 6, 55, 35, 19, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 55};
    double Cost[] = {32, 22, 11, 44, 55, 66, 22, 33, 11, 99, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EXPECT_EQ(full_enumeration(23, 200, Weight, Cost), 340);//Примерно 1,5 секунд

}

TEST(Full_Enumeration, VERYHARD1) {
    double Weight[] = {11, 33, 27, 39, 40, 31, 6, 55, 35, 19, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 77,
                       88, 99, 88};
    double Cost[] = {32, 22, 11, 44, 55, 66, 22, 33, 11, 99, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EXPECT_EQ(full_enumeration(26, 200, Weight, Cost), 340);//Примерно 15 секунд
}

TEST(Full_Enumeration, VERYHARD2) {
    double Weight[] = {11, 33, 27, 39, 40, 31, 6, 55, 35, 19, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 77,
                       88, 99, 88, 66, 33};
    double Cost[] = {32, 22, 11, 44, 55, 66, 22, 33, 11, 99, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EXPECT_EQ(full_enumeration(28, 200, Weight, Cost), 340);//примерно 44 секунды
}