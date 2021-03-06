#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,temp;
    string str;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>str;
        temp = n;
        for(int i=0;i<str.size();i++){
            if(str[i]=='8'){
                temp = i;
                break;
            }
        }
        if(n-temp>=11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

