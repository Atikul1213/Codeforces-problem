#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total = 0,n,arr[103];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(i%2==0)
            total += (arr[i]*arr[i]);
        else
            total -= (arr[i]*arr[i]);
    }

    printf("%.10lf\n",abs(total)*acos(-1));
    return 0;
}

