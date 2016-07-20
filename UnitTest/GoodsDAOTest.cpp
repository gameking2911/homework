#include "stdafx.h"
#include "CppUnitTest.h"
#include "GoodsDAO.h"
#include "fakeDataSource.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(GoodsDAOTest)
	{
	public:


		TEST_METHOD(should_return_cola_3_when_search_by_ITEM000001)
		{
			// TODO: 在此输入测试代码
			fakeDataSource* pDataSource = new fakeDataSource;
			pDataSource->setInfo("ITEM000001", "cola", 3.00);
			GoodsDAO* pDao = new GoodsDAO(pDataSource);

			Assert::AreEqual(std::string("cola"), pDao->getName("ITEM000001"));
			Assert::AreEqual(3.00, pDao->getPrice("ITEM000001"));
		}

	};
}