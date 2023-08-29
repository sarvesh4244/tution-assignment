#include <iostream>
using namespace std;
class bank
{
public:
    string name = "sarvesh", type = "current";
    int number = 1, balance;
    int a;
    bank()
    {
        cout << "wellcome to th bank" << endl;
        cout << "Name :" << name << endl;
        cout << "Account number : " << number << endl;
        cout << "Type :" << type << endl;
        cout << " Balance : " << balance << endl;
    }
    bank deposit()
    {
        cout << "enter the value : " << endl;
        cin >> balance;
        cout << " amount is added to bank. \n total amount in bank is " << balance;
    }
    bank assig()
    {
    }
};
