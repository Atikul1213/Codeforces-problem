#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,one,zero,Min;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        one = 0, zero = 0;
        for(int i=0;i<str.size();i++){
            char ch = str[i];
            if(ch=='1') one++;
            else zero++;
        }
        Min = min(one,zero);
        if(Min%2==1)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    return 0;
}

