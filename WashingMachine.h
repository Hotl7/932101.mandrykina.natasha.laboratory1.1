#pragma once

#include<string>
using namespace std;

class WashingMachine
{
private:
	int price,guarantee;
	string type, manufacturer, energyCons, cntrlType, name;
	float trustMeasure = 0;

public:
	void SetPrice(string price);
	int GetPrice();
	void SetGuarantee(string guarantee);
	int GetGuarantee();
	void SetType(string type);
	string GetType();
	void SetManufacturer(string manufacturer);
	string GetManufacturer();
	void SetEnergyCons(string energyCons);
	string GetEnergyCons();
	void SetCntrlType(string cntrlType);
	string GetCntrlType();
	void SetName(string name);
	string GetName();
	void SetTrustMeasure(float trustMeasure);
	float GetTrustMeasure();




};

