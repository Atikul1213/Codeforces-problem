#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1029];
    char ch1,ch2,ch3;
    int n,temp;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='.'){
                temp = i-1;
            ch1 = str[i-1];
            ch2 = str[i+1];
            break;
        }
    }
    n = ch2 - '0';
    if(ch1=='9')
        cout<<"GOTO Vasilisa."<<endl;
    else if(n<5){
        for(int i=0;i<=temp;i++){
            cout<<str[i];
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<=temp;i++){
            if(str[i]=='.')
                break;
            if(temp==i)
                cout<<str[i]-'0'+1<<endl;
            else
                cout<<str[i];
        }
    }
    return 0;
}

