#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba5.1/Laba5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			double t;
			t = h(1,1);
			Assert::AreEqual(t, 0.5);

		}
	};
}
