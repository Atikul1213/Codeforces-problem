#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    char str[104];
    char ch,ch1;
    scanf("%[^\n]",str);
    len = strlen(str);
    for(int i=len-1;i>=0;i--){
        ch = str[i];
        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ){
            ch1 = ch;
            break;
        }
    }
    if(ch>='a' && ch<='z')
        ch = ch-32;
    if(ch=='A' || ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='Y')
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

