#include <iostream>
using namespace std;
class sarvesh
{
public:
    int a, b;
    sarvesh add()
    {
        cout << "enter the first value :";
        cin >> a;
        cout << "enter the first value :";
        cin >> b;
        cout << a + b << " is the sum";
    }
    sarvesh min()
    {

        cout << "enter the first value :";
        cin >> a;
        cout << "enter the first value :";
        cin >> b;
        cout << a - b << " is the sum";
    }
    sarvesh muli()
    {
        cout << "enter the first value :";
        cin >> a;
        cout << "enter the first value :";
        cin >> b;
        cout << a * b << " is the sum";
    }
    sarvesh divi()
    {
        cout << "enter the first value :";
        cin >> a;
        cout << "enter the first value :";
        cin >> b;
        cout << a / b << " is the sum";
    }
};

int main()
{
    cout << "welllcome to calculator";
    string s;
    cout << "enter the sign :";
    cin >> s;
    sarvesh obj;
    if (s == "+")
    {
        obj.add();
    }
    else if (s == "-")
    {
        obj.min();
    }
    else if (s == "*")
    {
        obj.muli();
    }
    else
    {
        obj.divi();
    }

    return 0;
}
