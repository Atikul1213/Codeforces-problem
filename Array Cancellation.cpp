#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    long long int value,Max ,cur;
    cin>>t;
    while(t--){
        cin>>n;
        Max = 0, cur = 0;
        for(int i=0;i<n;i++){
            cin>>value;
             cur = max(Max,cur+value);
        }
        cout<<cur<<endl;
    }
    return 0;
}

