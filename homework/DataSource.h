#pragma once
#include <string>
struct tuple
{
	std::string barcode;
	std::string name;
	double price;
};


class DataSource
{
public:
	DataSource();
	virtual ~DataSource();
	tuple getInfo(const std::string& barcode);
private:
	tuple data[10];
	int length;
};
