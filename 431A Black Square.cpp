#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5],sum=0;
    string str;
    for(int i=1;i<=4;i++)
        cin>>arr[i];
    cin>>str;
    for(int i=0;i<str.size();i++){
            char ch = str[i];
         sum += arr[ch-'0'];
    }
    cout<<sum<<endl;
    return 0;
}

