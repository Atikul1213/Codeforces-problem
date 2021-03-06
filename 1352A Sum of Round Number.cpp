#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,total,rem,cnt,arr[100],i;
    cin>>t;
    while(t--){
            total = 0,cnt=1,i=0;
        cin>>n;
        while(n!=0){
            rem = n % 10;
            n /= 10;
            if(rem==0){
                    cnt*=10;
                continue;
            }
            total++;
            arr[i++] = rem*cnt;
            cnt*=10;

        }
        cout<<total<<endl;
        for(int k=0;k<i;k++){
                if(k!=0)
                cout<<" ";
            cout<<arr[k];
        }
        cout<<endl;
    }
    return 0;
}

