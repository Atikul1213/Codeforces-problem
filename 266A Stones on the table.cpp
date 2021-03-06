#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    char ch1,ch2;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n-1;i++){
        ch1 = str[i];
        ch2 = str[i+1];
        if(ch1==ch2) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

