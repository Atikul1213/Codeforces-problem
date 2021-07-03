#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,v,k,value;
    cin>>n>>v;
    for(int i=0;i<n;i++){
        cin>>k;
        int ck = 0;
        for(int j=0;j<k;j++){
            cin>>value;
            if(value<v){
                ck = 1;
            }
        }
            if(ck==1){
                vec.push_back(i);
            }
    }
    cout<<vec.size()<<endl;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if(i!=0)
            cout<<" ";
        cout<<vec[i]+1;
    }
    cout<<endl;
    return 0;
}

