#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ck=0,sz,mid,first=0,sec=0;
    char ch;
    string str;
    cin>>n;
    sz = n/2;
    cin>>str;
    for(int i=0;i<str.size();i++){
        ch = str[i];
        if(ch=='4' || ch=='7'){
            ck = 0;
        }
        else {
            ck = 1;
        break;
        }

        if(i<sz) first+= (ch-'0');
        else
            sec += (ch-'0');
    }
   if(ck==0 &&( first==sec))
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

    return 0;
}

