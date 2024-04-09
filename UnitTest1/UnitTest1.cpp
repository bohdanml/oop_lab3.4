#include "pch.h"
#include "CppUnitTest.h"
#include "..//lab3.4/main.cpp"
#include "..//lab3.4/Factory.cpp"
#include "..//lab3.4/T1.cpp"
#include "..//lab3.4/T2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestT2Creation)
        {
            // Arrange
            int value = 10;

            // Act
            T2* objT2 = Factory::CreateT2(value);

            // Assert
            Assert::IsNotNull(objT2);
            

            // Cleanup
            Factory::DeleteT2(objT2);
        }
    };
}