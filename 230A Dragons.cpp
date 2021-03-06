#include<bits/stdc++.h>
using namespace std;
bool myFun(pair<int,int>&x,pair<int,int>&y){
    return x.first < y.first;
}
int main()
{
    vector<pair<int,int> >vec;
    vector<pair<int,int> >::iterator it;
    int s,n,x,y,ck=0;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end(),myFun);
    for(it=vec.begin();it!=vec.end();it++){

        if(it->first<s){
            s+=it->second;
        }
        else{
            ck = 1;
            break;
        }
    }
    if(ck==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}

