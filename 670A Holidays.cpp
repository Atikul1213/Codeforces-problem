#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,Min,Max;
    cin>>n;
    rem = n%7;
    Min = (n / 7)*2;
    Max = Min;
    if(rem>5)
        Min += 1;
    if(rem>0){
    if(rem>=2)
        Max +=2;
    else
        Max += 1;
    }
    cout<<Min<<" "<<Max<<endl;
    return 0;
}

