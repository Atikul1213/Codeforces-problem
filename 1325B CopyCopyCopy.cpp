#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,value;
    set<int>s;
    cin>>t;
    while(t--){
        s.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>value;
            s.insert(value);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}

