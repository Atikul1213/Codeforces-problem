#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[100],arr2[5000];
    int rem,temp,j,k=0,n;
    for(int i=1;i<=1000;i++){
        temp = i;
        j = 0;
        while(temp!=0){
            rem = temp % 10;
            arr1[j++] = rem;
            temp /= 10;
        }
        arr1[j]='\0';
        for(int l=j-1;l>=0;l--){
            arr2[k++] = arr1[l];
        }
    }
    arr2[k]='\0';
    cin>>n;
    cout<<arr2[n-1]<<endl;
    return 0;
}

