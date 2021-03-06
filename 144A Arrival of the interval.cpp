#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[103],Max = 0, Min = INT_MAX,pos1,pos2,total;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>Max){
            Max = arr[i];
            pos1 = i+1;

        }
        if(Min >= arr[i]){
            Min  = arr[i];
            pos2 = i+1;
        }
    }

    total = (n-pos2)+ (pos1-1);
    if(pos1 > pos2)
    cout<<total-1<<endl;
    else
        cout<<total<<endl;
    return 0;
}

