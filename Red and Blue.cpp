#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[104],arr2[104],Mx1,Mx2;
    int m,n,t;
    cin>>t;
    while(t--){
           Mx1 = 0, Mx2  = 0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            if(i!=0)
                arr1[i] += arr1[i-1];
            Mx1 = max(Mx1,arr1[i]);
        }

        cin>>m;
        for(int i=0;i<m;i++){
            cin>>arr2[i];
            if(i!=0)
                arr2[i] +=arr2[i-1];
            Mx2 = max(Mx2,arr2[i]);
        }

        cout<<Mx1+Mx2<<endl;
    }
    return 0;
}

