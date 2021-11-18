#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My622test
{
	TEST_CLASS(My622test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 10;
			Assert::AreEqual(a, 10);
		}
	};
}
