#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\Pr5.1E OOP\Pr5.1E OOP\Rational.cpp"
#include "C:\Users\vladt\source\repos\Pr5.1E OOP\Pr5.1E OOP\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		Rational r(1, 2);
			Assert::IsTrue(Rational{ 1, 2 } == r);
		}
	};
}
