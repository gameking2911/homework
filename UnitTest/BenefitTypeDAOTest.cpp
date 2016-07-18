#include "stdafx.h"
#include "CppUnitTest.h"
#include "BenefitTypeDAO.h"
#include "Recognition.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(BenefitTypeDAOTest)
	{
	public:
		TEST_METHOD(should_return_buy2onefree_when_search_by_ITEM000001)
		{
			// TODO: 在此输入测试代码
			BenefitTypeDAO* pDao = new BenefitTypeDAO(new BenefitTypeSource);
			Assert::AreEqual("买2赠1", pDao->getType("ITEM000001"));
		}


	};
}