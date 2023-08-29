#include <iostream>
using namespace std;
class maths
{
public:
    void area()
    {
        cout << "wellcome to area of square calculation ..........." << endl
             << endl;
        int w;
        cout << "enter the a = " << endl;
        cin >> w;
        cout << w * w << " is the area of square." << endl;
    }
    void area(int a) // cirlce
    {
        cout << "wellcome to area of CIRCLE calculation ..........." << endl
             << endl;
        cout << "enter the R : " << endl;
        cin >> a;
        cout << "the area of circle is : " << 3.14 * a * a << endl;
    }
    void area(int a, int b) // rectangle
    {
        cout << "wellcome to area of RECTANGLE calculation ..........." << endl
             << endl;
        cout << "enter the w : " << endl;
        cin >> a;
        cout << "enter the h : " << endl;
        cin >> b;
        cout << "THE AREA OF RECTANGLE : " << a * b << endl;
    }
    void area(int a, int b, int c) // tringle
    {
        cout << "wellcome to area of TRINGLE calculation ..........." << endl
             << endl;
        cout << "enter the B : " << endl;
        cin >> a;
        cout << "enter the H : " << endl;
        cin >> b;
        c = 2;
        cout << "THE AREA OF TRINGLE : " <<  a * b/c << endl;
    }
};


int main()
{
    int a, b, c;
    maths hey;
    hey.area();
    hey.area(a );
    hey.area(a, b);
    hey.area(a, b, c);

    return 0;
}