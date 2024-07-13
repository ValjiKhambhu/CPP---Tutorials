#include <iostream>

using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

class derived : public base
// class derived : base
// class derived :private base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    // setdata();
    data3 = data2 * getdata1();
    // data3=data2*data1;
}

void derived ::display()
{
    cout << "\n the value of data1:" << getdata1();
    cout << "\n the value of data2:" << data2;
    cout << "\n the value of data3:" << data3;
}

int main()
{
    derived d;
    // d.setdata();
    d.setdata();
    d.process();
    d.display();
    return 0;
}
