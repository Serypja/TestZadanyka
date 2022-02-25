#include<iostream>
#include<string>
#include"TransportC.h"
using namespace std;













//Функция которая отправляет на создание обьекта
void CreateObject(Transport& cl) {
    cl.SetObgectTransport();//Создаём и объявляем переменные
    cl.GetObjectMachine(); //Метод вывода информации на экран
}


int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");
    Motorcycle Mot;
    Kick_Scooter KS;
    Car Ca;
    Bus Bu;

    if (argc > 1) {
        for (int i = 1; i < argc; i++)
        {
            //cout << "argv[:" << i << "] = " << endl;  ======= Проверка вывода в консоль
            cout << argv[i] << endl; //======= Проверка вывода в консоль

            switch (stoi(argv[i])) // Нельзя вводить буквенные аргументы
            {
            case 0:
                CreateObject(Mot);
                break;
            case 1:
                CreateObject(KS);
                break;
            case 2:
                CreateObject(Ca);
                break;
            case 3:
                CreateObject(Bu);
                break;
            default:
                cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА." << endl;
                break;
            }
        }
    }
    system("pause");

    return 0;
}