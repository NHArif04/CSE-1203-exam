#include<iostream>
using namespace std;

class Number{
    int n;
public:
    Number(int a=0)
    {
        n=a;
    }
    void showNumber()
    {
        cout<<n<<endl;
    }
};

int main()
{
    Number obj1, obj2(10);
    obj1.showNumber();
    obj2.showNumber();
    return 0;
}