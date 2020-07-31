#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},n,mov=0,k=4;
    cin>>n;
    while(n!=0){
        mov += n/arr[k];
        n = n % arr[k];
        k--;
    };
    cout<<mov<<endl;
    return 0;
}

