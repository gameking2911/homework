#include "stdafx.h"
#include "CppUnitTest.h"
#include "GoodsDAO.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(GoodsDAOTest)
	{
	public:


		TEST_METHOD(should_return_cola_3_when_search_by_ITEM000001_2)
		{
			// TODO: 在此输入测试代码
			fakeDataSource* data = new fakeDataSource;

			GoodsDAO* pDao = new GoodsDAO(new DataSource);
			Assert::AreEqual(std::string("可口可乐"), pDao->getName("ITEM000001"));
			Assert::AreEqual(3, pDao->getPrice("ITEM000001"));

		}

	};
}