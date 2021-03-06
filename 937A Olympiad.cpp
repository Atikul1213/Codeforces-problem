#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    set<int>s;
    set<int>::iterator it;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value==0)
            continue;
        s.insert(value);
    }
    cout<<s.size()<<endl;
    return 0;
}

