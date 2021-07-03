#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1="abc";
    int t,sz;
    char ch1,ch2;
    cin>>t;
    while(t--){
        cin>>str;
        sz = str.size();
        bool ck = 0;
        for(int i=0;i<sz-1;i++){
            ch1 = str[i], ch2 = str[i+1];
            if(ch1=='a' && ch2=='a') ck = 1;
            if(ch1=='b' && ch2=='b') ck = 1;
            if(ch1=='c' && ch2=='c') ck = 1;
        }
        if(ck==1)
            cout<<-1<<endl;
        else{
            for(int i=1;i<sz-1;i++){
                 ch1 = str[i];
                 if(ch1=='?'){
                    for(int j=0;j<3;j++){
                        ch2 = str1[j];
                        if(str[i-1]!=ch2 && str[i+1]!=ch2)
                            str[i] = ch2;
                    }
                 }
            }
            if(str[0]=='?' && str[1]=='a')
                str[0] = 'b';
            else if(str[0]=='?' && str[1]!='a')
                str[0] = 'a';
            if(str[sz-1]=='?' && str[sz-2]=='a')
                str[sz-1] = 'b';
            else if(str[sz-1]=='?' && str[sz-2]!='a')
                str[sz-1] = 'a';
            cout<<str<<endl;
        }
    }
    return 0;
}

