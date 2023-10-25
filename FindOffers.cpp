#include "FindOffers.h"

void FindOffers(WashingMachine** machines, Client* client, int count)
{
	for (int i = 0; i < count; i++)
	{
		//мера доверия к i-ому продукту в цене
		if ((machines[i]->GetPrice() > client->GetMaxWantedPrice() or machines[i]->GetPrice() < client->GetMinWantedPrice()) && (client->GetWantedPrice()!=0))
		{
			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetPricePriority());
		}


		 //мера доверия по гарантии
		if ((machines[i]->GetGuarantee() != client->GetWantedGuarantee()) && client->GetWantedGuarantee() != 0) {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetGuaranteePriority());
		}


		//мера доверия по типу
		if ((machines[i]->GetType() != client->GetWantedType()) && client->GetWantedType() != "не важен") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetTypePriority());
		}


		//мера доверия по производителю
		if ((machines[i]->GetManufacturer() != client->GetWantedManufacturer()) && client->GetWantedManufacturer() != "не важен") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetManufacturerPriority());
		}


		//мера доверия по энергопотреблению
		if ((machines[i]->GetEnergyCons() != client->GetWantedEnergyConsumption()) && client->GetWantedEnergyConsumption() != "не важен") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetEnergyPriority());
		}


		//мера доверия по типу управления
		if ((machines[i]->GetCntrlType() != client->GetWantedControlType()) && client->GetWantedControlType() != "не важен") {

			machines[i]->SetTrustMeasure(-100); continue;
		}
		else {
			machines[i]->SetTrustMeasure(machines[i]->GetTrustMeasure() + client->GetControlPriority());
		}

	}



}
