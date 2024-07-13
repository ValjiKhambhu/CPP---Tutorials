#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;

        void displayData(){
            cout<<"Value of var_base is "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;

        void displayData(){
            cout<<"value of var_base is "<<var_base<<endl;
            cout<<"value of var_derived is "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *ptr_base;
    DerivedClass obj_derived;

    ptr_base = &obj_derived; // ptr_base is pointing to derived class object, this pointer can only access base class member

    ptr_base->var_base = 34;
    ptr_base->displayData();

    return 0;
}