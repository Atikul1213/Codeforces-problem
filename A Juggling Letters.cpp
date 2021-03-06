#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt[259],n,t,ck;
    string str;
    cin>>t;
    while(t--){
        cin>>n;
        memset(cnt,0,sizeof(cnt));
        ck = 0;
        for(int i=0;i<n;i++){
            cin>>str;
            for(int j=0;j<str.size();j++){
                char ch = str[j];
                cnt[ch]++;
            }
        }
        for(char ch='a';ch<='z';ch++){
            if(cnt[ch]>0){
                if(cnt[ch]%n!=0){
                    ck = 1;
                    break;
                }
            }
        }
        if(ck==0) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

