#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Zero=0,One=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch=='1') One++;
        else
            Zero++;
    }
    cout<<n-(min(One,Zero)*2)<<endl;
    return 0;
}

