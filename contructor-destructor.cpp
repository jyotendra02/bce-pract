#include <iostream>
using namespace std;

class Riya
{
     int a,b;
     public: 
     Riya(int x , int y)  // This is Constructor 
     {
       a=x;
       b=y;
     }   
    ~Riya()                // This is Destructor
    {
    cout<<"\nObject is destroyed";
    }
    void show()
    {
       cout<<"Value of a = "<<a<<"\nValue of b = "<<b;  
    }
};

int main()
{
    Riya obj(18,19);
    obj.show();
    return 0;
}