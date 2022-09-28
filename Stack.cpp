#include<bits/stdc++.h>
#define n 100
using namespace std;


class Stack{
    

    public:
    int* arr;
    int top;

    Stack(){
        arr = new int [n];
        top = -1;

    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack oberflow"<<endl;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element in Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}