#include "FindOffers.h"

void FindOffers(WashingMachine** machines, Client* client, int count)
{
	for (int i = 0; i < count; i++)
	{
		//���� ������� � i-��� �������� � ����
		if ((machines[i]->GetPrice() > client->GetMaxWantedPrice() or machines[i]->GetPrice() < client->GetMinWantedPrice()) && (client->GetWantedPrice()!=0))
		{
			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetPricePriority());
		}


		 //���� ������� �� ��������
		if ((machines[i]->GetGuarantee() != client->GetWantedGuarantee()) && client->GetWantedGuarantee() != 0) {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetGuaranteePriority());
		}


		//���� ������� �� ����
		if ((machines[i]->GetType() != client->GetWantedType()) && client->GetWantedType() != "�� �����") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetTypePriority());
		}


		//���� ������� �� �������������
		if ((machines[i]->GetManufacturer() != client->GetWantedManufacturer()) && client->GetWantedManufacturer() != "�� �����") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetManufacturerPriority());
		}


		//���� ������� �� �����������������
		if ((machines[i]->GetEnergyCons() != client->GetWantedEnergyConsumption()) && client->GetWantedEnergyConsumption() != "�� �����") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetEnergyPriority());
		}


		//���� ������� �� ���� ����������
		if ((machines[i]->GetCntrlType() != client->GetWantedControlType()) && client->GetWantedControlType() != "�� �����") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetControlPriority());
		}

	}



}
