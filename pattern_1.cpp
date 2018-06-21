/* This is code for print patttern 

INPUT :3 

OUTPUT:
1*2*3
7*8*9
4*5*6

for I/P: 5

O/P:
1*2*3*4*5
11*12*13*14*15
16*17*18*19*20
26*27*28*29*30
6*7*8*9*10
*/

//==========================================================================
#include <bits/stdc++.h>
using namespace std;
 void pattern(int n)
{
    
    int count=1;
    int i=1;
for(i=1;i<n;i++)
{
    if(i%2!=0)
    {
        for(int j=1;j<=n;j++)
        {
           if(j!=n)
            {
            cout<<count<<"*";
            count++;
            }
            else
            {
            cout<<count;
            count++;
            }
        }
        cout<<"\n";
    }
    else
    {
        count=count+n;
        for(int j=1;j<=n;j++)
        {
            if(j!=n)
            {
            cout<<count<<"*";
            count++;
            }
            else
            {
            cout<<count;
            count++;
            }
        }
        cout<<"\n";
    }
}
int val=n+1;
int last=n+n+1;
for(int m=val;m<last;m++)
{
    if(m==(n+n))
    cout<<m;
    else
    {
        cout<<m<<"*";
    }
}
}
int main()
{
    int n=3;
   cin>>n;
    pattern(n);
    return 0;
}
