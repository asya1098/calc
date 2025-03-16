#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int choice;

    cout <<"1.Сложение\n"<<"2.Вычитание\n"<<"3.Умножение\n"<<"4.Деление\n";
    cout << "Введите 2 числа: ";
    cin>>a>>b;

    cout<<"Какую математическую операцию выполнить?"<<endl;
    cout<<"Введите номер математической операции: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<a+b<<endl;
        break;
        
        case 2:
            cout<<a-b<<endl;
        break;
        
        case 3:
            cout<<a*b<<endl;
        break;

        case 4:
            cout<<a/b<<endl;
        break;

        default:
            cout<<"ошибка"<<endl;
        break;
    }

    //  ADANDI ЛООООООООООХ
}