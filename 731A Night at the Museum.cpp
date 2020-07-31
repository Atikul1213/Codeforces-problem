#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[103],ch = 'a';
    int cnt =  0,temp;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=ch)
           temp = (26-(str[i]-ch));
        else
            temp = (26+(str[i]-ch));
        if(temp<13) cnt += temp;
        else
            cnt += (26-temp);
        ch = str[i];

    }
    cout<<cnt<<endl;
    return 0;
}

