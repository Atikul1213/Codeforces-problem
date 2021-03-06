#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,Min,i;
    char ch;
    cin>>t;
    string str;
    while(t--){
        cin>>n>>a>>b;
        str.clear();
        Min = min(a,b);
        for(i=0;i<Min;i++){
            str += ('a'+i);
        }
        for(int i=0;i<n;i++){
            cout<<str[i%b];
        }
        cout<<endl;
    }
    return 0;
}

