#include "FindNeeds.h"

void FindNeeds(Client* client)
{
	cout << "Добро пожаловать в систему подбора стиральных машинок!" << endl;

	cout << "Укажите желаемую стоимость, если стоимость не важна, введите 0" << endl;
	client->SetWantedPrice();

	cout << "Укажите желаемую гарантию, если гарантия не важна, введите 0" << endl;
	client->SetWantedGuarantee();

	cout << "Укажите тип из предложенных.Если тип не важен, пропустите это поле" << endl;
	cout << "1.ручная" << endl;
	cout << "2.полуавтоматическая" << endl;
	cout << "3.автоматическая" << endl;
	cout << "4.активаторная" << endl;
	cout << "5.миниатюрная" << endl;
	cout << "6.с вертикальной загрузкой" << endl;
	client->SetWantedType();

	cout << "Укажите производителя. Если производитель не важен, пропустите это поле" << endl;
	cout << "1.Россия" << endl;
	cout << "2.Япония" << endl;
	cout << "3.Германия" << endl;
	cout << "4.Швеция" << endl;
	cout << "5.Китай" << endl;
	client->SetWantedManufacturer();


	cout << "Укажите класс энергопотребления. Если класс не важен, пропустите это поле " << endl;
	cout << "1.А+++" << endl;
	cout << "2.А++" << endl;
	cout << "3.А+" << endl;
	cout << "4.А" << endl;
	cout << "5.В" << endl;
	cout << "6.С" << endl;
	cout << "7.D" << endl;
	client->SetWantedEnergyConsumption();



	cout << "Укажите тип управления. Если тип не важен,пропустите это поле" << endl;
	cout << "1.Механический" << endl;
	cout << "2.Электронный" << endl;
	client->SetWantedControlType();
}
