#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt[1004]={0},value,Max = 0;
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        cnt[value]++;
        s.insert(value);
    }
    for(int i=0;i<=1000;i++){
        if(cnt[i]>Max)
            Max = cnt[i];
    }
    cout<<Max<<" "<<s.size()<<endl;
    return 0;
}

