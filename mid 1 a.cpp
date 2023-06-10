#include<iostream>
using namespace std; 

class Number{
        int number1, number2;
    public:
        void set(int a, float b)
        {
            number1 = a;
            number2 = b;
        }
        
        void show()
        {
            cout<<number1<<" "<<number2<<endl;
        }
};

int main(){
    Number n;
    n.set(7, 5.00);
    n.show();
    return 0;
}