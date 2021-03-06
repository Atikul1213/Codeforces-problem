#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if( (a==9&&b==1) ){
        cout<<a<<" "<<a+1<<endl;
    }

    else if( abs(a-b)>1 )
        cout<<-1<<endl;
    else if(a<b && a!=b){
            b = b*100;
        cout<<b-1<<" "<<b<<endl;
    }
    else if(a==b){
        b=b*100+5;
        cout<<b-1<<" "<<b<<endl;
    }
    else if(a>b){
       cout<<-1<<endl;
    }
    return 0;
}

