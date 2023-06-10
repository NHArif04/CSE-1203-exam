#include<iostream>
#include<cstring>
using namespace std;

class car;
class bike{
        char model[20];
        float speed;
        int passengers;
    public:
        bike(const char m[], float s, int p)
        {
            strcpy(model, m);
            speed = s;
            passengers = p;
        }

        friend void compareSpeed(car car1, bike bike1);
};

class car{
        char model[20];
        float speed;
        int passengers;
    public:
        car(const char m[], float s, int p)
        {
            strcpy(model, m);
            speed = s;
            passengers = p;
        }

        friend void compareSpeed(car car1, bike bike1);
};

void compareSpeed(car car1, bike bike1)
{
    if (car1.speed > bike1.speed){
        cout << "Car is faster than bike" << endl;
    } else if (bike1.speed > car1.speed){
        cout<<"Bike is faster than Car"<<endl;
    } else {
        cout<<"Car and Bike are at same speed"<<endl;
    }
}

int main()
{
    car car1("Toyota", 120.4,4);
    bike bike1("Yamaha", 80.0,2);
    compareSpeed(car1, bike1);
    return 0;
}