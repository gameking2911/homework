#include "stdafx.h"
#include "CppUnitTest.h"
#include "BenefitTypeDAO.h"
#include "fakeBenefitTypeSource.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(BenefitTypeDAOTest)
	{
	public:
		TEST_METHOD(should_return_buy2onefree_when_search_by_ITEM000001)
		{
			
			fakeBenefitTypeSource* pDataSource = new fakeBenefitTypeSource;
			pDataSource->setInfo("ITEM000001", 1);
			BenefitTypeDAO* pDao = new BenefitTypeDAO(pDataSource);
			Assert::AreEqual(1, pDao->getType("ITEM000001"));
		}


	};
}