#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem;
    cin>>n;
    if(n==0)
        cout<<"O-|-OOOO"<<endl;
    else{
    while(n!=0){
        rem = n % 10;
        if(rem>=5)
            cout<<"-O|";
        else
            cout<<"O-|";
        rem = rem % 5;
        for(int i=0;i<5;i++){
            if(i==rem)
                cout<<"-";
            else
                cout<<"O";
        }
        cout<<endl;
        n /= 10;
    }
    }
    return 0;
}

