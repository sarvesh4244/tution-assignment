#include <iostream>
using namespace std;
int roll, s1, s2, s3, s4, s5, total;
class st
{
public:
    st()
    {
        roll = 1;
    }
};
class te:public st
{
public:
     te()
    {
        s1 = 50;
        s2 = 90;
        s3 = 100;
        s4 = 20;
        s5 = 40;
    }
};
class re :public te
{
public:
re(){
total=s1+s2+s3+s4+s5;
cout<<" Roll no :"<<roll<<"\n scores in subjects are \n eco : "<<s2<<"\n maths"<<s3<<"\n hiss"<<s4<<"\n buss"<<s5<<"\n acc"<<s1<<endl;
cout<<"total is "<<total<<endl;
}
};
int main(){
    re o;

    return 0;
}
