#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int ck = 0;
    cin>>str;
    int sz = str.size();
    for(int i=0;i<sz-1;i++){
        char ch = str[i];
        if(ch=='0' && ck==0){
            ck = 1;
            continue;
        }
        else
            cout<<ch;
    }
    if(ck==1)
        cout<<str[sz-1];
    cout<<endl;
    return 0;
}

