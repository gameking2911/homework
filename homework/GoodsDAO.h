#pragma once
#ifndef _GOODSDAO_H_
#define _GOODSDAO_H_
#include <string>
#include "recognition.h"
#include "DataSource.h"
class GoodsDAO
{
public:
	GoodsDAO(DataSource*);
	GoodsDAO();
	virtual ~GoodsDAO();

public:
	double getPrice(const std::string& barcode);
	std::string getName(const std::string& barcode);
private:
	DataSource* pDataSource;
};


#endif
