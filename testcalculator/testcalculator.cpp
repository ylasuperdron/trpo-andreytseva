#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Amson\source\repos\trpo-andreytseva\calculator\schet.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testcalculator
{
	TEST_CLASS(testcalculator)
	{
	public:
		
		TEST_METHOD(Testsum)
		{
			Assert::IsTrue(sum(2,3)==5);
			Assert::IsTrue(sum(3.65,2.15) ==5.8 );
			Assert::IsTrue(sum(-3,-365) ==-368 );
		}
	};
}
