#include<bits/stdc++.h>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p--)
{
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int small=arr[0];
    int res=arr[1]-arr[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-small);
        small=min(small,arr[i]);
    }
    cout<<res<<endl;
}
}
