#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ck;
    string str;
    cin>>t;
    while(t--){
            ck = 1;
        cin>>str;
        sort(str.begin(),str.end());
        for(int i=str.size()-1;i>0;i--){
            int diff = (str[i]-'a') - (str[i-1]-'a');
                if(diff!=1)
                    ck = 0;
        }
        if(ck==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}

