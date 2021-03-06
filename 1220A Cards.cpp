#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt_Z=0,cnt_N=0,ck = 0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch=='n') cnt_N++;
        if(ch=='z') cnt_Z++;
    }
    for(int i=0;i<cnt_N;i++){
        if(i!=0)
            cout<<" ";
        cout<<1;
        ck = 1;
    }
    if(ck==1) cout<<" ";
    for(int i=0;i<cnt_Z;i++){
        if(i!=0)
            cout<<" ";
        cout<<0;
    }
    cout<<endl;
    return 0;
}

