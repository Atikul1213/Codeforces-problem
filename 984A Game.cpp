#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,mid;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        vec.push_back(value);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    if(n%2==1)
        mid = (n-1)/2;
    else
        mid = n/2;
    cout<<vec[mid]<<endl;
    return 0;
}

