#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int ck = 0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A'&&str[i+1]=='B'&&str[i+2]=='C')
            ck = 1;
        if(str[i]=='A'&&str[i+1]=='C'&&str[i+2]=='B')
            ck = 1;
        if(str[i]=='B'&&str[i+1]=='A'&&str[i+2]=='C')
            ck = 1;
        if(str[i]=='B'&&str[i+1]=='C'&&str[i+2]=='A')
            ck = 1;
        if(str[i]=='C'&&str[i+1]=='A'&&str[i+2]=='B')
            ck = 1;
        if(str[i]=='C'&&str[i+1]=='B'&&str[i+2]=='A')
            ck = 1;
    }
    if(ck==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

