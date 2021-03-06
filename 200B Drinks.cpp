#include<bits/stdc++.h>
using namespace std;
int main()
{
    double arr[103],total=0.0,n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        total += (arr[i]/100.00);
    }
    total = (total*100)/n;
    printf("%.12lf\n",total);
    return 0;
}

