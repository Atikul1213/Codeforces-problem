#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sz;
    string str;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        sz = str.size();
        ch = str[sz-1];
        if(ch=='o')
            cout<<"FILIPINO"<<endl;
        else if(ch =='u')
            cout<<"JAPANESE"<<endl;
        else if(ch=='a')
            cout<<"KOREAN"<<endl;
    }
    return 0;
}

