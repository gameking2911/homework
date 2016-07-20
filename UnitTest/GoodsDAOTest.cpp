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
			fakeDataSource* data = new fakeDataSource;
			data->setInfo("ITEM000001", "可口可乐", 3);
			GoodsDAO* pDao = new GoodsDAO(data);

			Assert::AreEqual(std::string("可口可乐"), pDao->getName("ITEM000001"));
			Assert::AreEqual(3, pDao->getPrice("ITEM000001"));

		}

	};
}