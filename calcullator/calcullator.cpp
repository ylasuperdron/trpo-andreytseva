#include "pch.h"
#include "CppUnitTest.h"
#include "..\ConsoleApplication2\ConsoleApplication2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace calcullator
{
	TEST_CLASS(calcullator)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double res = sum(2, 3);
			Assert::IsTrue(res==5);
		}
	};
}
