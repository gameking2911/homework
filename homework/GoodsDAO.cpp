#include "GoodsDAO.h"

GoodsDAO::GoodsDAO(data)
{

}

GoodsDAO::~GoodsDAO()
{

}

std::string GoodsDAO::getName(const std::string& barcode)
{
	return data->getInfo(barcode)->name;
}

std::string GoodsDAO::getPrice(const std::string& barcode)
{
	return data[barcode]->price;
}
