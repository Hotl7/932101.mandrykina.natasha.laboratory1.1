#include "Client.h"

void Client::SetMinWantedPrice()
{
	min_wanted_price.SetValue(wanted_price - wanted_price / 10);
}

void Client::SetMaxWantedPrice()
{
	max_wanted_price.SetValue(wanted_price + wanted_price / 10);
}

void Client::SetWantedPrice()
{
	cin >> wanted_price;
	SetMinWantedPrice();
	SetMaxWantedPrice();
}

int Client::GetWantedPrice()
{
	return wanted_price;
}

int Client::GetMaxWantedPrice()
{
	return max_wanted_price.GetValue();
}

int Client::GetMinWantedPrice()
{
	return min_wanted_price.GetValue();
}

void Client::SetWantedGuarantee()
{
	int value;
	cin >> value;
	wanted_guarantee.SetValue(value);
}

int Client::GetWantedGuarantee()
{
	return wanted_guarantee.GetValue();
}

void Client::SetWantedType()
{
	int value;
	cin >> value;
	switch (value)
	{
	case 1:
		wanted_type.SetValue("ручна€");
		break;
	case 2:
		wanted_type.SetValue("полуавтоматическа€");
		break;
	case 3: 
		wanted_type.SetValue("автоматическа€");
		break;
	case 4:
		wanted_type.SetValue("активаторна€");
		break;
	case 5:
		wanted_type.SetValue("миниатюрна€");
		break;
	case 6:
		wanted_type.SetValue("с вертикальной загрузкой");
		break;
	default:
		cout << "¬ы не выбрали вид из предложенного списка, значение по умолчанию: \"не важен\" ";
		wanted_type.SetValue("не важен");
		break;

	}


}

string Client::GetWantedType()
{
	return wanted_type.GetValue();
}

void Client::SetWantedManufacturer()
{
	int value;
	cin >> value;
	switch (value)
	{
	case 1:
		wanted_manufacturer.SetValue("–осси€");
		break;
	case 2:
		wanted_manufacturer.SetValue("япони€");
		break;
	case 3:
		wanted_manufacturer.SetValue("√ермани€");
		break;
	case 4:
		wanted_manufacturer.SetValue("Ўвеци€");
		break;
	case 5:
		wanted_manufacturer.SetValue(" итай");
		break;
	default:
		cout << "¬ы не выбрали производител€ из предложенного списка, значение по умолчанию: \"не важен\" ";
		wanted_manufacturer.SetValue("не важен");
		break;
	}
}

string Client::GetWantedManufacturer()
{
	return wanted_manufacturer.GetValue();
}

void Client::SetWantedEnergyConsumption()
{
	int value;
	cin >> value;
	switch (value)
	{
	case 1:
		wanted_energy_consumption.SetValue("A+++");
		break;
	case 2:
		wanted_energy_consumption.SetValue("A++");
		break;
	case 3:
		wanted_energy_consumption.SetValue("A+");
		break;
	case 4:
		wanted_energy_consumption.SetValue("A");
		break;
	case 5:
		wanted_energy_consumption.SetValue("B");
		break;
	case 6:
		wanted_energy_consumption.SetValue("C");
		break;
	case 7:
		wanted_energy_consumption.SetValue("D");
		break;
	default:
		cout << "¬ы не выбрали энергопотребление из предложенного списка, значение по умолчанию: \"не важен\" ";
		wanted_energy_consumption.SetValue("не важен");
		break;
	}

}

string Client::GetWantedEnergyConsumption()
{
	return wanted_energy_consumption.GetValue();
}

void Client::SetWantedControlType()
{
	int value;
	cin >> value;
	switch (value)
	{
	case 1:
		wanted_control_type.SetValue("механический");
		break;
	case 2:
		wanted_control_type.SetValue("электронный");
		break;
	default:
		cout << "¬ы не выбрали управление из предложенного списка, значение по умолчанию: \"не важен\" ";
		wanted_control_type.SetValue("не важен");
		break;
	}
}

string Client::GetWantedControlType()
{
	return wanted_control_type.GetValue();
}




void Client::SetPricePriority(float priority)
{
	min_wanted_price.SetPriority(priority);
	max_wanted_price.SetPriority(priority);

}

float Client::GetPricePriority()
{
	return min_wanted_price.GetPriority();
}

void Client::SetGuaranteePriority(float priority)
{
	wanted_guarantee.SetPriority(priority);
}

float Client::GetGuaranteePriority()
{
	return wanted_guarantee.GetPriority();
}

void Client::SetTypePriority(float priority)
{
	wanted_type.SetPriority(priority);
}

float Client::GetTypePriority()
{
	return wanted_type.GetPriority();
}

void Client::SetManufacturerPriority(float priority)
{
	wanted_manufacturer.SetPriority(priority);
}

void Client::SetEnergyPriority(float priority)
{
	wanted_energy_consumption.SetPriority(priority);
}

void Client::SetControlPriority(float priority)
{
	wanted_control_type.SetPriority(priority);
}

float Client::GetManufacturerPriority()
{
	return wanted_manufacturer.GetPriority();
}

float Client::GetEnergyPriority()
{
	return wanted_energy_consumption.GetPriority();
}

float Client::GetControlPriority()
{
	return wanted_control_type.GetPriority();
}
