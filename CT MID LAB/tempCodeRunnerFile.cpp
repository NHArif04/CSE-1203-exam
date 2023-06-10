#include<iostream>
using namespace std;

class Number{
        int number1,  number2;
    public:
        Number(){number1 = 0; number2 = 0;}
        Number(int a, float b)
        {
            number1 = a;
            number2 = b;
        }

        void show()
        {
            cout<<number1<<" "<<number2<<endl;
        }
};

int main()
{
    Number obj, obj1(7, 5.00);
    obj.show();
    obj1.show();
    return 0;
}