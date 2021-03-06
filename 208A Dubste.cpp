#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    char ch1='W',ch2='U',ch3='B';
    int ck = 0;
    cin>>str1;
    for(int i=0;i<str1.size();i++){
        if(str1[i]==ch1 && str1[i+1]==ch2&&str1[i+2]==ch3){
            if(ck==1) str2+=" ";

                i+=2;
            continue;
        }
        else{
        str2+=str1[i];
        ck = 1;
        }
    }
    cout<<str2<<endl;
    return 0;
}

