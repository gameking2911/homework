#include "stdafx.h"
#include "CppUnitTest.h"
#include "stubBenefitTypeDAO.h"
#include "stubGoodsDAO.h"
#include "ItemGenerator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(ItemGeneratorTest)
	{
	public:
		TEST_METHOD(should_return_sum6_when_ITEM000001_cola_3_3_buyTwofreeOne)
		{
			// TODO: 在此输入测试代码
			stubGoodsDAO* gdao = new stubGoodsDAO;
			stubBenefitTypeDAO* bdao = new stubBenefitTypeDAO;
			gdao->setName("cola");
			gdao->setPrice(3);
			bdao->setType(1);//1代表买2赠1
			ItemGenerator* pItemGenerator = new ItemGenerator(gdao, bdao, new Recognition);

			Assert::AreEqual(6.00, pItemGenerator->getSum("ITEM000001"));
			Assert::AreEqual(3.00, pItemGenerator->getSaved("ITEM000001"));
		}

		TEST_METHOD(should_return_when_ITEM000002_apple_2_5p5_95discount)
		{
			// TODO: 在此输入测试代码
			stubGoodsDAO* gdao = new stubGoodsDAO;
			stubBenefitTypeDAO* bdao = new stubBenefitTypeDAO;
			gdao->setName("apple");
			gdao->setPrice(5.5);
			bdao->setType(2);//0x0002代表95折类型优惠
			ItemGenerator* pItemGenerator = new ItemGenerator(gdao, bdao,new Recognition);

			Assert::AreEqual(10.45, pItemGenerator->getSum("ITEM000002"));
			Assert::AreEqual(0.55, pItemGenerator->getSaved("ITEM000002"));
		}


		//TEST_METHOD(should_return_when_colaInfo_buyTwofreeOne_95discount)
		//{
		//	// TODO: 在此输入测试代码
		//	ItemGenerator* pItemGenerator = new ItemGenerator();
		//	Assert::AreEqual(10.45, pItemGenerator->getSum());
		//	Assert::AreEqual(0.55, pItemGenerator->getSaved());
		//}

		//TEST_METHOD(should_return_when_colaInfo_buyTwofreeOne)
		//{
		//	// TODO: 在此输入测试代码
		//	ItemGenerator* pItemGenerator = new ItemGenerator();
		//	Assert::AreEqual(10.45, pItemGenerator->getSum());
		//	Assert::AreEqual(0.55, pItemGenerator->getSaved());
		//}

		//TEST_METHOD(should_return_when_colaInfo_nobenefit)
		//{
		//	// TODO: 在此输入测试代码
		//	Printer* pPrinter = new Printer();
		//	Assert::AreEqual("1234", "1134");
		//}
	};
}