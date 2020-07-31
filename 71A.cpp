#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,t;
    char str[100];
    cin>>t;
    getchar();
    while(t--){
            len =0;
        gets(str);
    len = strlen(str);
        if(len<=10)
            cout<<str<<endl;
        else
        cout<<str[0]<<len-2<<str[len-1]<<endl;
    }
    return 0;
}

