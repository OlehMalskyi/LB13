#include "pch.h"
#include "CppUnitTest.h"
#include "../LB13.2.2/LB13.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestQuickSort)
        {
            int arr[] = { 5, 2, 8, 1, 7, 3, -1 };
            const size_t size = sizeof(arr) / sizeof(arr[0]);

            quickSort(arr, 0, size - 1);

            Assert::AreEqual(-1, arr[0]);
            Assert::AreEqual(1, arr[1]);
            Assert::AreEqual(2, arr[2]);
            Assert::AreEqual(3, arr[3]);
            Assert::AreEqual(5, arr[4]);
            Assert::AreEqual(7, arr[5]);
            Assert::AreEqual(8, arr[6]);
        }

        TEST_METHOD(TestSortNumbers)
        {
            std::ostringstream oss;
            std::streambuf* coutBuffer = std::cout.rdbuf();
            std::cout.rdbuf(oss.rdbuf());

            sortNumbers(5, 2, 8, 1, 7, 3, -1);

            cout.rdbuf(coutBuffer);

            Assert::AreEqual("Sorted numbers: -1 1 2 3 5 7 8 \n", oss.str().c_str());
        }
    };
}
