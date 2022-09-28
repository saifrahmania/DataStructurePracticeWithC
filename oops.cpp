#include<iostream>
using namespace std;


class student{
    string name;
    public:    
    int age;
    int gender;

    student(){
        cout<<"Default constructor"<<endl;
    }
    student(string s){
        name = s;
    }

    student(string s,int a, int g){
        cout<<"parameterized constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender  = a.gender;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }
    
    void printInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;

    }

    bool operator==(student &a){
        if(name==a.name && age==a.age && gender ==a.gender)
            return true;
        return false;
}
}
;

int main(){
    // student arr[3];
    // string s;
    // for(int i = 0;i<3;i++){
    //     cout<<"Name["<<i<<"] : ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age["<<i<<"] : ";
    //     cin>>arr[i].age;
    //     cout<<"Gender["<<i<<"] : ";
    //     cin>>arr[i].gender;
    // }

    // for(int i = 0;i<3;i++){
    //     arr[i].printInfo();
    // }
    student a("Rohan",21,1);
    a.printInfo();
    student b;
    student c=a;
    c.printInfo();
    return 0;
}
