#include<iostream>
using namespace std;

void moveAllXToEnd(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='x'){
        moveAllXToEnd(s.substr(1));
        cout<<s[0];
    }
    else{
        cout<<s[0];
        moveAllXToEnd(s.substr(1));
    }
}

int main(){
    string s;
    cin>>s;
    moveAllXToEnd(s);
    return 0;
}