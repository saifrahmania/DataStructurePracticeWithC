// write a code to find abbreviation of a string
#include <bits/stdc++.h>
using namespace std;

string solve(string s){
    istringstream ss(s);
    string ans = "", word;
    while (ss >> word) {
        if (word != "and") {
            ans += toupper(word[0]);
        }
    }
    return ans;
}

int main()
{
    string s,abbr,temp;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"Give the abbreviation: ";
    getline(cin,temp);
    abbr = solve(s);
    strcmp(abbr.c_str(),temp.c_str()) == 0 ? cout<<"Valid" : cout<<"Invalid";
    
    return 0;
}