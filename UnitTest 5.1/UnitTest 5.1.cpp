#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab 5.1\Lab 5.1\Lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 0, b = 0, c = 1;
			int t;
			t = (a + b + c) / (sin(a * b) * sin(a * b) + c * c);
			Assert::AreEqual(t, 1);

		}
	};
}
