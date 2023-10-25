#include "MakeDataBase.h"

void MakeDataBase(WashingMachine** machines, int count)
{
	ifstream file(filename);
	string str;
	char delimiter = ',';

	for (int i = 0; i < count; i++)
	{
		getline(file, str);
		stringstream stream(str);
		string name, price, guarantee, type, manufacturer, energyCons, cntrlType;

		getline(stream, name, delimiter);
		getline(stream, price, delimiter);
		getline(stream, guarantee, delimiter);
		getline(stream, type, delimiter);
		getline(stream, manufacturer, delimiter);
		getline(stream, energyCons, delimiter);
		getline(stream, cntrlType, delimiter);

		WashingMachine* temp_machine = new WashingMachine;

		temp_machine->SetName(name);
		temp_machine->SetPrice(price);
		temp_machine->SetGuarantee(guarantee);
		temp_machine->SetType(type);
		temp_machine->SetManufacturer(manufacturer);
		temp_machine->SetEnergyCons(energyCons);
		temp_machine->SetCntrlType(cntrlType);

		machines[i] = temp_machine;
	}
	file.close();


}
