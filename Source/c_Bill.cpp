#include "c_Bill.h"

c_Bill::c_Bill()
{
	this->value = 0;
	this->serialNumber = 0;
	this->year = 0;
	this->currency = "NONE";
	this->country = "NONE";
	this->width = 0;
	this->height = 0;
	this->wear = 0;
	this->canUse = false;
}

c_Bill::c_Bill(int value, unsigned long serialNumber, int year, string currency, string country, float width, float height, int wear)
{
	this->value = value;
	this->serialNumber = serialNumber;
	this->currency = currency;
	this->country = country;
	this->width = width;
	this->height = height;
	this->wear = wear;
	this->canUse = true;
}

int c_Bill::getValue()
{
	return this->value;
}

string c_Bill::getCurrency()
{
	return this->currency;
}

string c_Bill::getCountry()
{
	return this->country;
}

string c_Bill::toString()
{
	string res;
	res += "Value: " + std::to_string(this->value) + "\n";
	res += "Serial number: " + std::to_string(this->serialNumber) + "\n";
	res += "Currency: " + this->currency + "\n";
	res += "Country: " + this->country + "\n";
	res += "Size: " + this->getSize() + "\n";
	res += "Wear: " + std::to_string(this->wear) + "\n";
	return string();
}

string c_Bill::getSize()
{
	return string("Width: " + std::to_string(this->width) + " Height: " + std::to_string(this->height) + '\n');
}

void c_Bill::addWear()
{
	if (canUse) {
		this->wear -= 1;
	}
	if (this->wear <= 0) {
		this->canUse = false;
	}
}
