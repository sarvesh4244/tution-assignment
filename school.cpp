#include <iostream>
using namespace std;
#include <string>
class student
{
public:
    int p_s = 95;
};
class teacher
{
public:
    int t_s = 9000000;
};
class person : public student, public teacher
{
public:
    int a_t = 45, a_s = 21;
    string n_t = "kajal ma'am";
    string n_s = "Sarvesh Vaishnani";
    void display(int a, int b, int c, int d, string r, string e)
    {
        cout << "name of the Teacher :" << r << endl;
        cout << "Age of the Teacher :" << a << endl;
        cout << "salary of the teacher :" << b << endl;
        cout << " Name of the Student :" << e << endl;
        cout << "Age of the Student :" << c << endl;
        cout << "Percentage of the Student :" << d << endl;
    }
};
int main()
{

    person o;
    int a = o.a_t, b = o.t_s, c = o.a_s, d = o.p_s;
    string r = o.n_t, e = o.n_s;
    o.display(a, b, c, d, r, e);
    return 0;
}