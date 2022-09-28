#include<bits/stdc++.h>
using namespace std;


class base{
    public:
    virtual void print()
    {
        cout<<"Print base class"<<endl;
    }
    void display(){
        cout<<"Display base class"<<endl;
    }
};

class derived: public base{
    public:
    void print()
    {
        cout<<"Print derived class"<<endl;
    }
    void display(){
        cout<<"Display derived class"<<endl;
    }

};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr->print();
    baseptr->display();
    return 0;
}