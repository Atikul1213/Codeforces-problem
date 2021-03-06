#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n,digit;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++){
        char ch = str[i];
        digit = ch-'0';
        if(digit%2==0){
            cnt+=(i+1);
        }
    }
    cout<<cnt<<endl;
    return 0;
}

