#include<iostream>
using namespace std;

void printAllSubStringWithASCIICode(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    printAllSubStringWithASCIICode(s.substr(1), ans);
    printAllSubStringWithASCIICode(s.substr(1), ans+s[0]);
    printAllSubStringWithASCIICode(s.substr(1), ans+to_string(s[0]));
}

int main(){
    string s;
    cin>>s;
    printAllSubStringWithASCIICode(s, "");
    return 0;
}