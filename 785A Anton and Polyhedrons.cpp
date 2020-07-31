#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,face=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="Icosahedron") face += 20;
        if(str=="Cube") face += 6;
      if(str=="Tetrahedron") face += 4;
        if(str=="Dodecahedron") face += 12;
        if(str=="Octahedron") face += 8;
    }
    cout<<face<<endl;
    return 0;
}

