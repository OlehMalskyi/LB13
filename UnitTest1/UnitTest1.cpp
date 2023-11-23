#include "pch.h"
#include "CppUnitTest.h"
#include "../LB13.1/sum.h"
#include "../LB13.1/var.h"
#include "../LB13.1/dod.h"
#include "../LB13.1/sum.cpp"
#include "../LB13.1/var.cpp"
#include "../LB13.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsSum;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumFunction)
        {
            nsVar::x = 1;
            nsVar::e = 0.0001;

            sum();

            Assert::AreEqual(0.540303, nsVar::s, 0.001);
        }
    };
}
