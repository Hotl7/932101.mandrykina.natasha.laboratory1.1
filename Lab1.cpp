#pragma once

#include <iostream>
#include <fstream>
using namespace std;
#include "Client.h"
#include "WashingMachine.h"

#include "CountLines.h"
#include "FindNeeds.h"
#include "FindOffers.h"
#include "FindPriority.h"
#include "MakeDataBase.h"




int main()
{
    setlocale(LC_ALL, "Russian");
    int count = CountLines();
    WashingMachine** machines = new WashingMachine * [count];
    Client client;

    MakeDataBase(machines, count);
    FindNeeds(&client);
    FindPriority(&client);
    FindOffers(machines, &client, count);

    cout << "Вот что мы нашли для вас:"<<endl;

    for (int i = 0; i < count; i++)
    {
        if (machines[i]->GetTrustMeasure() >= 0) {
            cout << "Наименование магазина: " << machines[i]->GetName() << endl;
            cout << "Стоимость машинки: " << machines[i]->GetPrice() << endl;
            cout << "Гарантия: " << machines[i]->GetGuarantee() << endl;
            cout << "Тип: " << machines[i]->GetType() << endl;
            cout << "Производитель: " << machines[i]->GetManufacturer() << endl;
            cout << "Энергопотребление: " << machines[i]->GetEnergyCons() << endl;
            cout << "Тип управления: " << machines[i]->GetCntrlType() << endl;

        }

    }

    








}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
