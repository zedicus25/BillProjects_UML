#pragma once
#include <string>
using std::string;
class c_Bill
{
private:
	int value;
	unsigned long serialNumber;
	int year;
	string currency;
	string country;
	float width;
	float height;
	int wear;
	bool canUse;
public:
	c_Bill();
	c_Bill(int value, unsigned long serialNumber, int year, string currency, string country, float width, float height, int wear);

	int getValue();
	string getCurrency();
	string getCountry();
	string toString();
	string getSize();
	void addWear();
	
	
};

