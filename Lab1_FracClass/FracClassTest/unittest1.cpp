#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Lab1_Fraction/pch.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace FracClassTest {
	TEST_CLASS(UnitTest1) {
public:

	TEST_METHOD(Init_String_1) {
		string fracString = "1/2";
		TFrac fracClass(fracString);
		Assert::AreEqual(fracString, fracClass.getFractionString());
	}
	}
	TEST_METHOD(Init_Number_1) {
		TFrac fracClass(2, 4);
		string fracCompar = "1/2";
		Assert::AreEqual(fracCompar, fracClass.getFractionString());
	}
	}
	TEST_METHOD(Init_Copy_1) {
		TFrac fracClass1(1, 4);
		TFrac fracClass2(fracClass1);
		Assert::AreEqual(fracClass1.getFractionString(), fracClass2.getFractionString());
	}
	TEST_METHOD(Add_1) {
		TFrac fracClass1(1, 2);
		TFrac fracClass2(-3, 4);
		fracClass1 = fracClass1.add(fracClass2);
		string answer = "-1/4";
		Assert::AreEqual(answer, fracClass1.getFractionString());
	}
	}
	TEST_METHOD(Multiply_1) {
		TFrac fracClass1(-1, 2);
		TFrac fracClass2(-1, 2);
		fracClass1 = fracClass1.multiply(fracClass2);
		string answer = "1/4";
		Assert::AreEqual(answer, fracClass1.getFractionString());
	}
	TEST_METHOD(Substract_1) {
		TFrac fracClass1(0, 1);
		TFrac fracClass2(1, 1);
		fracClass1 = fracClass1.substract(fracClass2);
		string answer = "-1/1";
		Assert::AreEqual(answer, fracClass1.getFractionString());
	}
	TEST_METHOD(Divide_1) {
		TFrac fracClass1(5, 6);
		TFrac fracClass2(1, 1);
		fracClass1 = fracClass1.divide(fracClass2);
		string answer = "5/6";
		Assert::AreEqual(answer, fracClass1.getFractionString());
	}
	TEST_METHOD(Square_1) {
		TFrac fracClass1(1, 3);
		fracClass1 = fracClass1.square();
		string answer = "1/9";
		Assert::AreEqual(answer, fracClass1.getFractionString());
	}
	TEST_METHOD(Reverse_1) {
		TFrac fracClass1(-2, 3);
		fracClass1 = fracClass1.reverse();
		string answer = "-3/2";
		Assert::AreEqual(answer, fracClass1.getFractionString());
	}
	TEST_METHOD(Minus_1) {
		TFrac fracClass(0, 1);
		string answer = "0/1";
		fracClass = -fracClass;
		Assert::AreEqual(answer, fracClass.getFractionString());
	}
	TEST_METHOD(Equal_1) {
		TFrac fracClass1(1, 6);
		TFrac fracClass2(1, 6);
		Assert::IsTrue(fracClass1 == fracClass2);
	}
	TEST_METHOD(Greater_1) {
		TFrac fracClass1(1, 6);
		TFrac fracClass2(0, 1);
		Assert::IsTrue(fracClass1 > fracClass2);
	}
	}
	TEST_METHOD(GetNumeratorNum_1) {
		TFrac fracClass(1, 23);
		int expectedNum = 1;
		Assert::AreEqual(expectedNum, fracClass.getNumeratorNumber());
	}
	TEST_METHOD(GetDenominatorNum_1) {
		TFrac fracClass(1, 222);
		int expectedNum = 222;
		Assert::AreEqual(expectedNum, fracClass.getDenominatorNumber());
	}
	TEST_METHOD(GetNumeratorString_1) {
		TFrac fracClass(1, 23);
		string expectedNum = "1";
		Assert::AreEqual(expectedNum, fracClass.getNumeratorString());
	}	
	TEST_METHOD(GetDenominatorString_1) {
		TFrac fracClass(1, 222);
		string expectedNum = "222";
		Assert::AreEqual(expectedNum, fracClass.getDenominatorString());
	}
	TEST_METHOD(GetFractionString_1) {
		TFrac fracClass(1, 2);
		string expectedString = "1/2";
		Assert::AreEqual(expectedString, fracClass.getFractionString());
	}
	};
}