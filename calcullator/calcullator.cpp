#include "pch.h"
#include "CppUnitTest.h"
#include "..\ConsoleApplication2\ConsoleApplication2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace calcullator
{
	TEST_CLASS(calcullator)
	{
	public:
		
		TEST_METHOD(TestSum)
		{
			double res = sum(2, 3);
			Assert::IsTrue(res==5);
		}
		TEST_METHOD(TestDel)
		{
			double res = del(6, 2);
			Assert::IsTrue(res==3);
		    res = del(15, 2);
			Assert::IsTrue(res == 7.5);
			
			
		}
	};
}
