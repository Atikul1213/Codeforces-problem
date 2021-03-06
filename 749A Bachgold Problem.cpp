#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0){
        n = n/2;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            if(i!=0)
                cout<<" ";
            cout<<2;
        }
        cout<<endl;
    }

    else{
        n = n/2;
        cout<<n<<endl;
        for(int i=1;i<n;i++){
            if(i!=1)
                cout<<" ";
            cout<<2;
        }
        cout<<" "<<3<<endl;
    }
    return 0;
}

