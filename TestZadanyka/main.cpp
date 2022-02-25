#include<iostream>
#include<string>
#include"TransportC.h"
using namespace std;













//������� ������� ���������� �� �������� �������
void CreateObject(Transport& cl) {
    cl.SetObgectTransport();//������ � ��������� ����������
    cl.GetObjectMachine(); //����� ������ ���������� �� �����
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
            //cout << "argv[:" << i << "] = " << endl;  ======= �������� ������ � �������
            cout << argv[i] << endl; //======= �������� ������ � �������

            switch (stoi(argv[i])) // ������ ������� ��������� ���������
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
                cout << "����������� ��� ����������." << endl;
                break;
            }
        }
    }
    system("pause");

    return 0;
}