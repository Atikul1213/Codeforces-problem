#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int upper=0,lower=0;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
            lower++;
        else
            upper++;
    }
    if(lower>=upper){
        for(int i=0;i<str.size();i++)
            cout<<(char)tolower(str[i]);
    }
    else
        for(int i=0;i<str.size();i++)
            cout<<(char)toupper(str[i]);
    cout<<endl;
    return 0;
}

