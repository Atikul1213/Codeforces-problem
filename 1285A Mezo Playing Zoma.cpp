#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,left=0,right=0;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>ch;
        if(ch=='L') left++;
        else
            right++;
    }
    cout<<(left+right+1)<<endl;
    return 0;
}

