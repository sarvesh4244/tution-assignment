#include <iostream>
using namespace std;
class calculator
{
public:
    int a, b;
    calculator()
    {
        cout << "enter the number a" << endl;
        cin >> a;
        cout << "enter the number b" << endl;
        cin >> b;
    }
    void add()
    {
        cout << a + b << "addition"<<endl;
    }
    void min()

    {
        cout << a - b << "minus is "<<endl;
    }
    void multi()

    {
        cout << a * b << "multiplication"<< endl;
    }
    void divi()

    {
        cout <<"the division "<< a / b << endl;
    }
};
int main()
{
    calculator obj;
    obj.add();
    obj.min();
    obj.multi();
    obj.divi();
    return 0;
}