#include<iostream>
using namespace std;

void printAllSubString(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    printAllSubString(s.substr(1), ans);
    printAllSubString(s.substr(1), ans+s[0]);
}

int main(){
    string s;
    cin>>s;
    printAllSubString(s, "");
    return 0;
}