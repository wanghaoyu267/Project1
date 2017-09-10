#include<iostream>
using namespace std;
long long ans=0;
int main()
{
   int n,m,a[100001][3];
   cin>>n>>m;
   for(int i=1;i<=n;i++)
    cin>>a[i][1];
   for(int i=1;i<=n;i++)
    cin>>a[i][2];
   for (int i=1;i<=n;i++)
    for (int j=i+1;j<=n;j++)
     for (int k=j+1;k<=n;k++)
      if ((j-i==k-j)&&(i<j)&&(j<k)&&(a[i][2]==a[k][2]))
       ans+=(a[i][1]+a[k][1])*(i+k);
    cout<<ans<<endl;
   return 0;
}

