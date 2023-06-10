#include<iostream>
using namespace std;

class A{
public:
    int x;
    A()
    {
        cout<<"A called"<<endl;
    }
protected:
    int y;
private:
    int z;
};

class B: public A{      //multi level
public:
    B()
    {
        cout<<"B called"<<endl;
    }
};

class C: protected A{   //multi level
public:
    C(){
        cout<<"C called"<<endl;
    }
};

class D: public B, private C{   //multiple inheritance
};

int main()
{
    A a;
    cout<<endl;
    B b;
    cout<<endl;
    C c;
    cout<<endl;
    D d;
    return 0;
}
