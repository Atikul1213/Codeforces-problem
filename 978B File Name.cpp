#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,cnt = 0;
    char ch1,ch2,ch3;
    cin>>n;
    cin>>str;
    for(int i=0;i<n-2;i++){
        ch1 = str[i], ch2 = str[i+1],ch3 = str[i+2];
        if(ch1=='x' && ch2=='x' && ch3=='x') cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

