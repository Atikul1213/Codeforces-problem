#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,value,temp,ck=0;
    vector<int>vec1,vec2,vec3;
    vector<int>::iterator it;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>value;
        vec1.push_back(value);
    }
    for(int i=0;i<m;i++){
        cin>>value;
        vec2.push_back(value);
    }
    for(int i=0;i<vec1.size();i++){
        temp = vec1[i];
        it = find(vec2.begin(),vec2.end(),temp);
        if(it!=vec2.end()){
            vec3.push_back(temp);
            ck = i;
        }
    }
    for(int i=0;i<vec3.size();i++){
        if(i!=0) cout<<" ";
        cout<<vec3[i];
    }
    cout<<endl;
    return 0;
}

