#include <iostream>
using namespace std;
int a, b;
class n1
{
public:
    friend void f();
};
void f(n1 o)
{
    cout << "enter the value : " << endl;
    cin >> a;
    cout << "enter the value : " << endl;
    cin >> b;
    if (a > b)
    {
        cout << endl
             << a << " is greater than";
    }
    else
    {
        cout << endl
             << b << " is greater than.";
    }
};
int main()
{
    n1 o;
    f(o);
    return 0;
}
