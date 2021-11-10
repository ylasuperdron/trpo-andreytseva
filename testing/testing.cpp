#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Amson\source\repos\trpo-andreytseva\calculator\schet.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testing
{
	TEST_CLASS(testing)
	{
	public:
		
		TEST_METHOD(Testproverka)
		{
			char a[1000] = { "155" };
			Assert::IsTrue(proverka(a) == 155);
			char b[1000] = { "abc" };
			Assert::IsTrue(proverka(b) > -1.7E-308 && proverka(b) < 1.7E-308);
		}
		TEST_METHOD(Testsum) {
			Assert::IsTrue(sum(2, 3) == 5);
			Assert::IsTrue(sum(3.65, 2.15) == 5.8);
			Assert::IsTrue(sum(-3, -365) == -368);
		}
		TEST_METHOD(Testminn) {
			Assert::IsTrue(minn(2, 15) == -13);
			Assert::IsTrue(minn(154, -235) == 389);
			Assert::IsTrue(minn(765.2, 38.95) == 726.25);
		}
		TEST_METHOD(Testumg) {
			Assert::IsTrue(umg(2, 3) == 6);
			Assert::IsTrue(umg(-3, 2.17) == -6.51);
			Assert::IsTrue(umg(-546, 0) == 0);
		}
		TEST_METHOD(Testproverkaznamenatelya) {
			Assert::IsTrue(proverkaznamenatelya(0)==1);
			Assert::IsTrue(proverkaznamenatelya(1) == 0);
			
		}
		TEST_METHOD(Testdel) {
			Assert::IsTrue(del(15, 3) == 5);
			Assert::IsTrue(del(-3, 1) == -3);
			Assert::IsTrue(del(4.6, 2) == 2.3);
		}
		TEST_METHOD(Test_menu) {
			Assert::IsTrue(prompt_menu_item(2,3,'+') == 0);
			Assert::IsTrue(prompt_menu_item(154,3,'-') == 0);
			Assert::IsTrue(prompt_menu_item(0,3,'*') == 0);
			Assert::IsTrue(prompt_menu_item(546,87,'/') == 0);
		}
	};
}
