#include "stdafx.h"
#include "CppUnitTest.h"
#include "recognition.h"
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(RecognitionTest)
	{
	public:
		//TEST_METHOD(should_return_ITEM000001_2_when_ITEM000001of1)
		//{
		//	// TODO: 在此输入测试代码
		//	recognition* pRecognition = new recognition();
		//	string strBarcode, strNumber;
		//	pRecognition->recognize("ITEM000001",&iBarcode,&iNumber);
		//	Assert::AreEqual("ITEM000001", iBarcode);
		//	Assert::AreEqual("1", iNumber);
		//}

		TEST_METHOD(should_return_ITEM000001_2_when_ITEM000001of2)
		{
			// TODO: 在此输入测试代码
			Recognition* pRecognition = new Recognition();
			std::string strBarcode;
			int iNumber;
			pRecognition->recognize("ITEM000001-2", strBarcode, iNumber);
			Assert::AreEqual(std::string("ITEM000001"), strBarcode);
			Assert::AreEqual(2, iNumber);
		}

	};
}