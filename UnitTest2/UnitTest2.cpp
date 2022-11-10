#include "pch.h"
#include "CppUnitTest.h"
#include "../33/33.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 2, 6, 8, 21, 9 };
			int S = Sum(a, 5);

			Assert::AreEqual(S, 30);
		}
	};
}
