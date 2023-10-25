#include "FindPriority.h"

void FindPriority(Client* client)
{
	string input;
	float priority = 0.6;
	cout << "Теперь нужно узнать приоритеты\n Введите последовательно в строчку нижеуказанные параметры от наиболее важного до наименее.\n";
	cout << "1.Цена" << endl;
	cout << "2.Гарантия" << endl;
	cout << "3.Тип машинки" << endl;
	cout << "4.Производитель" << endl;
	cout << "5.Энергопотребление" << endl;
	cout << "6.Тип управления" << endl;
	cin >> input;
	for (const auto& i : input)
	{
		if (i == '1') client->SetPricePriority(priority);
		else if (i == '2') client->SetGuaranteePriority(priority);
		else if (i == '3') client->SetTypePriority(priority);
		else if (i == '4') client->SetManufacturerPriority(priority);
		else if (i == '5') client->SetEnergyPriority(priority);
		else if (i == '6') client->SetControlPriority(priority);
		priority = priority - 0.1;
	}
}
