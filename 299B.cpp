#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    string str;
    cin>>n>>k;
    cin>>str;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch=='#'){
            cnt++;
            if(cnt>=k){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(ch=='.')
            cnt=0;
    }
    cout<<"YES"<<endl;
    return 0;
}

