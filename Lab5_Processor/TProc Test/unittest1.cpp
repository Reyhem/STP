#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Lab5_Processor/TProc.h"
#include "../../Lab1_FracClass/Lab1_Fraction/TFrac.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TProcTest
{		
	TEST_CLASS(TProc_Test)
	{
	public:
		
		TEST_METHOD(Init_1) {
			TFrac leftFrac;
			TFrac rightFrac;
			TProc<TFrac> obj(leftFrac, rightFrac);
			TFrac answer;
			Assert::AreEqual(answer.getFractionString(), obj.readLeft().getFractionString());
		}
		
		TEST_METHOD(Operation_1) {
			TFrac leftFrac(1, 2);
			TFrac rightFrac(1, 2);
			TProc<TFrac> obj(leftFrac, rightFrac);
			TOprtn oper = Add;
			obj.writeOper(oper);
			obj.doOper();
			TFrac answer(1, 1);
			Assert::AreEqual(answer.getFractionString(), obj.readLeft().getFractionString());
		}
		
		TEST_METHOD(Function_1) {
			TFrac leftFrac(56, 7);
			TFrac rightFrac(-22, 3);
			TProc<TFrac> obj(leftFrac, rightFrac);
			TFunc funcOper = Rev;
			obj.doFunc(funcOper);
			TFrac answer(-3, 22);
			Assert::AreEqual(answer.getFractionString(), obj.readRight().getFractionString());
		}
	
	};
}