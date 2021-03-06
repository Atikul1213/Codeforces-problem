#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,ck=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0') cnt++;
        if(str[i]=='1') ck = 1;
    }
    if(ck==1){
    cout<<"1";
    for(int i=0;i<cnt;i++){
        cout<<"0";
    }
    cout<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}

