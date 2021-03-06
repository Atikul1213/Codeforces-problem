#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int t;
    cin>>t;
    while(t--){
            vec.clear();
       for(int i=0;i<4;i++){
            int n;
            cin>>n;
            vec.push_back(n);
       }
        sort(vec.begin(),vec.end());
       cout<<vec[1]<<" "<<vec[2]<<" "<<vec[2]<<endl;
    }
    return 0;
}

