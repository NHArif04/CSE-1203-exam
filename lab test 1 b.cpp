#include<iostream>
using namespace std;

class AB{
    int n1, n2;  //attribute as private(-)
public:
    AB(int a, int b=0) //constructor & destructor method as public(+)
    {
        n1=a;
        n2=b;
        cout<<n1<<" "<<n2<<endl;
    }
    ~AB()
    {
        cout<<"destrcting AB"<<endl;
    }
};

int main()
{
    AB obj(10,20), ob(20); //object creation
    return 0;
}