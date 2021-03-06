#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,arr[103],temp,Min = INT_MAX;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(k%arr[i]==0){
            temp = k/arr[i];
            if(temp<Min){
                Min = temp;
            }
        }
    }
    cout<<Min<<endl;
    return 0;
}

