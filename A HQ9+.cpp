#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch1='H',ch2='Q',ch3='9';
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]==ch1||str[i]==ch2||str[i]==ch3){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

