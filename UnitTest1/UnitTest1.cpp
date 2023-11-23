#include "pch.h"
#include "CppUnitTest.h"
#include "../LB13.2.1/LB13.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int x, y, z, w;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMacroFunctionality)
        {
            int x = 5, y = 8, z = 10;
            int w;

            w = MIN(SQR(x - y), ABS(x - y));
            Assert::AreEqual(3, w);

            w = MAX(x + SQR(y), z + SQR(x));
            Assert::AreEqual(69, w);
        }
	};
}
