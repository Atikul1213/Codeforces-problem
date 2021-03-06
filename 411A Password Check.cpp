#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[104];
    int Capital = 0, small = 0,digit = 0, len =0;
    cin>>str;
    len = strlen(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
            small++;
        if(str[i]>='A' && str[i]<='Z')
            Capital++;
        if(str[i]>='0' && str[i]<='9')
            digit++;
    }
    if(len>=5 && small>=1 && Capital>=1 && digit>=1)
        cout<<"Correct"<<endl;
    else
        cout<<"Too weak"<<endl;
    return 0;
}

