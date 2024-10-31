#include "gtest/gtest.h"
#include "/Users/tarasneridnyi/Desktop/Lab6_2_it/src/functions.cpp"

TEST(TEST1, testingSwapHalvesFunction) {

    int size = 6;
    int* a = new int[size]{1, 2, 3, 4, 5, 6};
    int expected[] = {4, 5, 6, 1, 2, 3};


    swapHalves(a, size);

    for (int i = 0; i < size; i++) {
        EXPECT_EQ(a[i], expected[i]) << "Елемент a[" << i << "] не відповідає очікуваному";
    }


    delete[] a;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
