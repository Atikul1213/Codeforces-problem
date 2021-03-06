#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    string str1;
    int n;
    scanf("%d %[^\n]",&n,str);
    str1 = str;
    if(str1=="of week"){
            if(n<=4 || n==7)
        cout<<52<<endl;
    else if(n==5 || n == 6)
        cout<<53<<endl;
    }
    else{
        if(n==30)
            cout<<11<<endl;
        else if(n==31)
            cout<<7<<endl;
        else
            cout<<12<<endl;
    }
    return 0;
}

