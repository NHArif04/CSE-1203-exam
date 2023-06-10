#include<iostream>
using namespace std;

class A{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class B: public A{
    //x public y protected and z will not inherit since it is a private property of another class
};

class C: protected A{
    //x,y protected
};

class D: private A{
    //x,y private
};
