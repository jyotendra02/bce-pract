#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
    sample()
    {
    cout<<"This is a constructor"<<endl;
    a = 100; b = 200;
    }
    int add()
    {
        return a+b;      
    }

};
int main()
{
    sample s; //constructor called
    cout<<"Output is: "<<s.add()<<endl;
    return 0;
}