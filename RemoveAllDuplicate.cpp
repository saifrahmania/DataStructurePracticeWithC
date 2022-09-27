#include<iostream>
using namespace std;

void removeAllDuplicate(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]==s[1]){
        removeAllDuplicate(s.substr(1));
    }
    else{
        cout<<s[0];
        removeAllDuplicate(s.substr(1));
    }
}

int main(){
    string s;
    cin>>s;
    removeAllDuplicate(s);
    return 0;
}