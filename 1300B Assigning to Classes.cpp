#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,value,mid;
    vector<int>vec;
    cin>>t;
    while(t--){
        cin>>n;
        n = 2*n;
        vec.clear();
        for(int i=0;i<n;i++){
            cin>>value;
            vec.push_back(value);
        }
        sort(vec.begin(),vec.end());
        mid = n/2;

        cout<<vec[mid]-vec[mid-1]<<endl;
    }
    return 0;
}

