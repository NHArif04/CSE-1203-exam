// Class is a user defined data type which holds its own data members and member functions which can be accessed and used by creating an instance of that class.
// Any class type variable is called an object

#include<iostream>
using namespace std;

class Student{
    public:
        int id;
    
    void setNumber(int x){
        id=x;
    }

    void showNumber(){
        cout<<"Student ID is "<<id<<endl;
    }
}

int main(){
    Student obj;
    obj.setNumber(75);
    obj.showNumber();
    return 0;
}