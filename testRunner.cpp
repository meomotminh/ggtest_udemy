#include <gtest/gtest.h>
#include "LibraryCode.hpp"
#include <vector>
#include <iostream>
/*
TEST(TestCountPositives, BasicTest)
{
    // Arrange
    std::vector<int> inputVector{1, -2, 3, -4, 5, -6, -7};

    // Act
    int count = countPositives(inputVector);

    // Assert
    ASSERT_EQ(3, count);
}

TEST(TestCountPositives, EmptyVectorTest)
{
    // Arrange
    std::vector<int> inputVector{};

    // Act
    int count = countPositives(inputVector);

    // Assert
    ASSERT_EQ(0, count);
}


TEST(TestCountPositives, AllNegativeTest)
{
    // Arrange
    std::vector<int> inputVector{-1, -2, -4};

    // Act
    int count = countPositives(inputVector);

    // Assert
    EXPECT_EQ(0, count);   
}
*/

TEST(ToUpperTest, BasicTest){
    // Arrange
    char inputString[] = "Hello World";

    // Act
    toUpper(inputString);

    std::cout << "After toUpper: " << inputString << "\n";
    // Assert
    ASSERT_STREQ("HELLO WORLD", inputString);
}

TEST(SquareRootTest, NegativeArgumentTest){
    double inputValue = -9;

    ASSERT_THROW(mySqrt(inputValue), std::runtime_error);
}

TEST(SquareRootTest, PositiveArgumentTest){
    double inputValue = 9;

    ASSERT_NO_THROW(mySqrt(inputValue));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}