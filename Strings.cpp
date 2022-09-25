#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ajskhklsjnasknajkehfsaf";
    int freq[26] ;
    for (int i = 0; i < s.length(); i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF = freq[i];
            ans = i+'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    // string s = "234523452345234523452345";
    // sort(s.begin(), s.end(),greater<int>());
    // cout << s << endl;
    // string s1 = "LSDKJFLKJSJKEL";
    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    // cout << s1 << endl;
    // string s2 = "lsdkjflkjsjkel";
    // transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    // cout << s2 << endl;
    //convert into upper case letters
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     if (s1[i] >= 'a' && s1[i] <= 'z')
    //     {
    //         s1[i] -= 32;
    //     }
    // }
    //convert into lower case letters
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     if (s1[i] >= 'A' && s1[i] <= 'Z')
    //     {
    //         s1[i] += 32;
    //     }
    // }

    //cout << s1 << endl;

    //cout<<'a'-'A'<<endl;
    // sort(s1.begin(), s1.end());
    // cout<<s1<<endl;
    //int x = 992;
    //cout << to_string(x) +"3" << endl;
    // for(int i=0; i<s1.length(); i++)
    // {
    //     cout << s1[i] << " : " << s1.at(i) << endl;
    // }

    //cout<<s1.find("com")<<endl;
    //s1.insert(2,"lol");
    // getline(cin, str);
    // string s1 = "Hello";
    // string s2 = "";
    // // s1.append(s2);
    // cout << s1[2] << endl;
    // // s1.clear();
    // // cout<<s1<<endl;
    // cout << s2.compare(s1) << endl;
    // if (s1.compare(s2) == 0)
    // {
    //     cout << "Strings are equal" << endl;
    // }
    // else
    // {
    //     cout << "Strings are not equal" << endl;
    // }
    // if(s2.empty()){
    //     cout<<"String is empty"<<endl;
    // }
    // else{
    //     cout<<"String is not empty"<<endl;
    // }
    return 0;
}

