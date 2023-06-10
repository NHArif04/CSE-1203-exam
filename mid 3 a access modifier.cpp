#include<iostream>
using namespace std;

class BAUST{
        public:
            string cse;
            void show(){cout<<"Nahid"<<endl;}
        private:
            string eee;
        protected:
            string me;
};

class MIT: private BAUST{
    //all private but private will not inherit
};

class IIT: protected BAUST{
    //all members are protected but private will not inherit
};

int main()
{
    BAUST ob;
    MIT obj;
    IIT object;
    ob.show();
    //obj.show(); //inaccessible private properties
    //object.show(); //same here
    return 0;
}