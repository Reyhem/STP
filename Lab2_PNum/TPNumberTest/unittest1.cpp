#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Lab2_PNum/TPNumber.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TPNumberTest
{		
	TEST_CLASS(TPNumberTest)
	{
	public:
		TEST_METHOD(InitAndOutput_1)
		{
			TPNumber testClass(10, 10, 3);
			string answer = "10";
			Assert::AreEqual(answer, testClass.getPString());
		}
		TEST_METHOD(InitAndOutput_2) {
			TPNumber testClass(10.01, 10, 3);
			string answer = "10.010";
			Assert::AreEqual(answer, testClass.getPString());
		}
		TEST_METHOD(Add_1) {
			TPNumber testClass1(15, 7, 5);
			TPNumber testClass2(66.66, 7, 5);
			testClass1 = testClass1.add(testClass2);
			double answer = 81.66;
			Assert::AreEqual(answer, testClass1.getPNumber());
		}
		TEST_METHOD(Multiply_1) {
			TPNumber testClass1(12.23, 7, 5);
			TPNumber testClass2(-6.66, 7, 5);
			testClass1 = testClass1.multiply(testClass2);
			double answer = -81.4518;
			Assert::AreEqual(answer, testClass1.getPNumber());
		}
		TEST_METHOD(Substract_1) {
			TPNumber testClass1(12.23, 7, 5);
			TPNumber testClass2(6.66, 7, 5);
			testClass1 = testClass1.subtract(testClass2);
			double answer = 5.57;
			Assert::AreEqual(answer, testClass1.getPNumber());
		}
		TEST_METHOD(Divide_1) {
			TPNumber testClass1(3, 7, 5);
			TPNumber testClass2(8, 7, 5);
			testClass1 = testClass1.divide(testClass2);
			double answer = 0.375;
			Assert::AreEqual(answer, testClass1.getPNumber());
		}
		TEST_METHOD(Square) {
			TPNumber testClass(-1.57, 16, 11);
			testClass = testClass.square();
			double answer = 2.4649;
			Assert::AreEqual(answer, testClass.getPNumber());
		}
	};
}