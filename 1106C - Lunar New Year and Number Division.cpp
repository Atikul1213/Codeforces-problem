#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    long long int sum=0,temp;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        vec.push_back(value);
    }
    sort(vec.begin(),vec.end());
    int i=0,j=n-1;
    while(i<j){
          temp = (vec[i]+vec[j]);
        sum += (temp*temp);
        i++,j--;
    }
    cout<<sum<<endl;
    return 0;
}

