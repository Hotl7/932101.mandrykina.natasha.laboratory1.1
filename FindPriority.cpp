#include "FindPriority.h"

void FindPriority(Client* client)
{
	string input;
	float priority = 0.6;
	cout << "������ ����� ������ ����������\n ������� ��������������� � ������� ������������� ��������� �� �������� ������� �� ��������.\n";
	cout << "1.����" << endl;
	cout << "2.��������" << endl;
	cout << "3.��� �������" << endl;
	cout << "4.�������������" << endl;
	cout << "5.�����������������" << endl;
	cout << "6.��� ����������" << endl;
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
