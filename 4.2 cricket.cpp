#include <iostream>
using namespace std;

class batman
{
public:
    int r1, r2, r3;
    int score()
    {
        cout << "enter the value :" << endl;
        cin >> r1;
        cout << "enter the value :" << endl;
        cin >> r2;
        cout << "enter the value :" << endl;
        cin >> r3;
    }
};
class cricket : public batman
{
public:
    int avg(int a, int b, int c)
    {
        int total= a + b + c ;
        cout << total / 3 << " is the avreage of the score" << endl;
    }
    int total(int a, int b, int c)
    {
        cout << a + b + c << " is the total of the score" << endl;
    }
    int best(int a, int b, int c)
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "the best score is : " << a << endl;
            }
            else
            {
                cout << "the best score is : " << c << endl;
            }
        }
        else if (b > c)
        {
            cout << "the best score is : " << b << endl;
        }
        else
        {
            cout << "the best score is : " << c << endl;
        }
    }
};
int main()
{
    cricket o;
    o.score();
    int a = o.r1, b = o.r2, c = o.r3;
    o.total(a, b, c);
    o.avg(a, b, c);
    o.best(a, b, c);

    return 0;
}