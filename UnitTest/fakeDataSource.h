#pragma once
#ifndef _FAKEDATASOURCE_H_
#define _FAKEDATASOURCE_H_
#include <string>
#include "..\homework\DataSource.h"


//struct tuple
//{
//	std::string barcode;
//	std::string name;
//	double price;
//};

class  fakeDataSource : public DataSource
{
public:
	 fakeDataSource();
	virtual	~ fakeDataSource();

	tuple getInfo(const std::string& Barcode);
	void setInfo(std::string barcode, std::string name, double price);
private:
	tuple data[10];
	int length;
};
#endif