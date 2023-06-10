#include<iostream>
using namespace std;

class ABCD{
    private:
        int x,y;
    
    public:
        void set(int a, int b){
            x=a;
            y=b;
        }

        void show(){
            cout<<x<<" "<<y;
        }
};

int main(){
    ABCD obj;
    obj.set(7,5);
    obj.show();
    return 0;
}