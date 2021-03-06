#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int ck = 0,cnt=0;
    cin>>str;
    for(int i=0;i<str.size();i++){
            char ch = str[i];
        if(str[0]=='1');
        else{
            ck = 1;
            break;
        }
        if(ch=='4'||ch=='1');
        else{
            ck = 1;
            break;
        }
        if(ch=='4'){
            cnt++;
            if(cnt==3){
                ck = 1;
                break;
            }
        }
        else
            cnt = 0;
    }
    if(ck==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}

