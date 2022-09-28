#include<bits/stdc++.h>
using namespace std;

//function overloading 
class ApnaCollege{
    public:
    void fun(){
        cout<<"No parameter"<<endl;
    }
    void fun(int a){
        cout<<"You entered "<<a<<endl;
    }
    void fun(double a){
        cout<<"You entered "<<a<<endl;
    }
    void fun(int a,int b){
        cout<<"You entered "<<a<<" and "<<b<<endl;
    }
};


int32_t main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(3.2);
    obj.fun(2,3);
    return 0;
}