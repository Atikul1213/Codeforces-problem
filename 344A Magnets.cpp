#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=1,n;
    string str,str1;
    cin>>n;
    cin>>str;
    for(int i=1;i<n;i++){
        cin>>str1;
        if(str!=str1) cnt++;
        str = str1;
    }
    cout<<cnt<<endl;
    return 0;
}

