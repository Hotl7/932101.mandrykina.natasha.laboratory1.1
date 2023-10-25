#pragma once
#include <iostream>
#include <string>
#include "Wish.h"
using namespace std;


class Client {
private:
	int wanted_price;
	
	Wish<int> min_wanted_price, max_wanted_price,wanted_guarantee;
	Wish<string> wanted_type,wanted_manufacturer,wanted_energy_consumption, wanted_control_type;

	void SetMinWantedPrice();
	void SetMaxWantedPrice();

public:
	void SetWantedPrice();
	int GetWantedPrice();
	int GetMaxWantedPrice();
	int GetMinWantedPrice();
	void SetWantedGuarantee();
	int GetWantedGuarantee();
	void SetWantedType();
	string GetWantedType();
	void SetWantedManufacturer();
	string GetWantedManufacturer();
	void SetWantedEnergyConsumption();
	string GetWantedEnergyConsumption();
	void SetWantedControlType();
	string GetWantedControlType();

	void SetPricePriority(float priority);
	float GetPricePriority();
	void SetGuaranteePriority(float priority);
	float GetGuaranteePriority();
	void SetTypePriority(float priority);
	float GetTypePriority();

	void SetManufacturerPriority(float priority);
	void SetEnergyPriority(float priority);
	void SetControlPriority(float priority);

	float GetManufacturerPriority();
	float GetEnergyPriority();
	float GetControlPriority();






};