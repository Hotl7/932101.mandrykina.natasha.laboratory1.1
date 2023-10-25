#include "WashingMachine.h"

void WashingMachine::SetPrice(string price)
{
	this->price = stoi(price);

}

int WashingMachine::GetPrice()
{
	return price;
}

void WashingMachine::SetGuarantee(string guarantee)
{
	this->guarantee = stoi(guarantee);
}

int WashingMachine::GetGuarantee()
{
	return guarantee;
}

void WashingMachine::SetType(string type)
{
	this->type = type;
}

string WashingMachine::GetType()
{
	return type;
}

void WashingMachine::SetManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;

}

string WashingMachine::GetManufacturer()
{
	return manufacturer;
}

void WashingMachine::SetEnergyCons(string energyCons)
{
	this->energyCons = energyCons;
}

string WashingMachine::GetEnergyCons()
{
	return energyCons;
}

void WashingMachine::SetCntrlType(string cntrlType)
{
	this->cntrlType = cntrlType;
}

string WashingMachine::GetCntrlType()
{
	return cntrlType;
}

void WashingMachine::SetName(string name)
{
	this->name = name;
}

string WashingMachine::GetName()
{
	return name;
}

void WashingMachine::SetTrustMeasure(float trustMeasure)
{
	this->trustMeasure = trustMeasure;

}

float WashingMachine::GetTrustMeasure()
{
	return trustMeasure;
}
