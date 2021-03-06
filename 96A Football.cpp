#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[103];
    char ch1,ch2;
    int cnt = 0,ck=0;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        ch1 = str[i];
        if(ch1=='1'){
                cnt++;
            if(cnt>=7){
                ck = 1;
                break;
            }
        }
        else
            cnt = 0;
    }
    cnt = 0;
    for(int i=0;str[i]!='\0';i++){
        ch1 = str[i];
        if(ch1=='0'){
                cnt++;
            if(cnt>=7){
                ck = 1;
                break;
            }
        }
        else
            cnt = 0;
    }
    if(ck==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

