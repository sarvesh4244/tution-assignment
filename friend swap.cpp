#include <iostream>
using namespace std;
int a, b;
class f1
{
public:
    friend void swap(){};
};
void swap(f1 o)
{
    cout << "enter the number  :" << endl;
    cin >> a;
    cout << "enter the number  :" << endl;
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " A ," << b << " B ";
};
int main()
{
    f1 w;
    swap(w);
    return 0;
}