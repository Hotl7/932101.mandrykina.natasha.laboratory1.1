#include "FindNeeds.h"

void FindNeeds(Client* client)
{
	cout << "����� ���������� � ������� ������� ���������� �������!" << endl;

	cout << "������� �������� ���������, ���� ��������� �� �����, ������� 0" << endl;
	client->SetWantedPrice();

	cout << "������� �������� ��������, ���� �������� �� �����, ������� 0" << endl;
	client->SetWantedGuarantee();

	cout << "������� ��� �� ������������.���� ��� �� �����, ���������� ��� ����" << endl;
	cout << "1.������" << endl;
	cout << "2.������������������" << endl;
	cout << "3.��������������" << endl;
	cout << "4.������������" << endl;
	cout << "5.�����������" << endl;
	cout << "6.� ������������ ���������" << endl;
	client->SetWantedType();

	cout << "������� �������������. ���� ������������� �� �����, ���������� ��� ����" << endl;
	cout << "1.������" << endl;
	cout << "2.������" << endl;
	cout << "3.��������" << endl;
	cout << "4.������" << endl;
	cout << "5.�����" << endl;
	client->SetWantedManufacturer();


	cout << "������� ����� �����������������. ���� ����� �� �����, ���������� ��� ���� " << endl;
	cout << "1.�+++" << endl;
	cout << "2.�++" << endl;
	cout << "3.�+" << endl;
	cout << "4.�" << endl;
	cout << "5.�" << endl;
	cout << "6.�" << endl;
	cout << "7.D" << endl;
	client->SetWantedEnergyConsumption();



	cout << "������� ��� ����������. ���� ��� �� �����,���������� ��� ����" << endl;
	cout << "1.������������" << endl;
	cout << "2.�����������" << endl;
	client->SetWantedControlType();
}
