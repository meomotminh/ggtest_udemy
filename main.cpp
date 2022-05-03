#include <iostream>
#include "LibraryCode.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class SomeClass
{
    public:
        SomeClass() = default;
        virtual void someMethod()
        {
            std::cout << "Say something\n";
        };
};

class MockedClass: public SomeClass
{
    public:
        MockedClass() = default;
        MOCK_METHOD0(someMethod, void());
};

TEST(TestSample, TestMock)
{
    MockedClass mc;
    EXPECT_CALL(mc, someMethod()).Times(2);
    mc.someMethod();
}



int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();    
}