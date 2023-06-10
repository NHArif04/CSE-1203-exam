#include<iostream>
using namespace std;

class Area{  //abstract class
    double dimention1, dimention2;
public:
    virtual double calculateArea(double a, double b)=0;  //pure virtual function
};

class Square: public Area{
public:
    double calculateArea(double a, double b)
    {
        double d1=a, d2=b;
        return d1*d2;
    }
};

class Triangle: public Area{
public:
    double calculateArea(double a, double b)
    {
        double d1=a, d2=b;
        return 0.5*d1*d2;
    }
};

class Circle: public Area{
public:
    double calculateArea(double a, double b)
    {
        double d1 = a, d2 =b;
        return 3.1416*d1*d2;
    }
};

int main()
{
    Area* p;  //since abstract class is incomplete it cannot create any object of it
    Square s;
    Triangle t;
    Circle c;
    p=&s;
    cout<<p->calculateArea(2.0,4.0)<<endl;
    p=&t;
    cout<<p->calculateArea(1.0,4.0)<<endl;
    p=&c;
    cout<<p->calculateArea(5.0,5.0)<<endl;
    return 0;
}