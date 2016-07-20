#include "GoodsDAO.h"

GoodsDAO::GoodsDAO(DataSource* dataSource)
{
	pDataSource = dataSource;
}

GoodsDAO::GoodsDAO()
{

}

GoodsDAO::~GoodsDAO()
{

}

std::string GoodsDAO::getName(const std::string& barcode)
{
	return pDataSource->getInfo(barcode).name;
}

double GoodsDAO::getPrice(const std::string& barcode)
{
	return pDataSource->getInfo(barcode).price;
}
