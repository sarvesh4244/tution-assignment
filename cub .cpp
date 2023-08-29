#include<iostream>
using namespace std;
class demo
{
    public:
    int a,b,cu,cube,c;
    inline demo()
    {
        cout<<"Enter your intrger for A = ";
        cin>>a;
        cout<<"Enter your integer for B = ";
        cin>>b;
        cout<<"Enter your integer for cubing = ";
        cin>>cu;
    }
    inline  void display()
    {
        c=a*b;
        cout<<"Multiplication = "<<c<<endl;
        cube=cu*cu*cu;
        cout<<"Cube = "<<cube;

    }

    
};
int main()
{
    demo obj;
    obj.display();
}