#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int m,n,value,sum = 0,sz;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>value;
        if(value<0){
                sum += value;
            vec.push_back(value);
        }
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    sz = vec.size();
    if(sz<=n)
        cout<<sum*-1<<endl;
    else{
            int j = sz-1,sum = 0;
        for(int i=0;i<n;i++){
            sum += vec[j--];
        }
        cout<<sum*-1<<endl;
    }
    return 0;
}

