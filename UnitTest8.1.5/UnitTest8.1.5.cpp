#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest815
{
	TEST_CLASS(UnitTest815)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool c;
			int i = 0;
			char str[] = "SSSQFfghfdhsf";
			c = contain(str, 1);
			Assert::AreEqual(c, true);
		}
	};
}
