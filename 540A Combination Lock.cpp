#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,n2,total=0;
    string str1,str2;
    cin>>n;
    cin>>str1>>str2;
    for(int i=0;i<n;i++){
        n1 = str1[i]-'0';
        n2 = str2[i]-'0';
        int temp = abs(n1-n2);
        total += min( temp,10-temp);
    }
    cout<<total<<endl;
    return 0;
}

