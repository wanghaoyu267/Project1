#include<iostream>
#include<algorithm>
using namespace std;
int cmp(const int &a, const int &b){
 if(a>b)return 1;else return 0;
}
int main()
{
   long long n,a[100004],b[100004];
   cin>>n;
   for (int i=1;i<=n;i++) cin>>a[i];
   for (int i=1;i<=n;i++) cin>>b[i];
   sort(a,a+n+1,cmp);
   sort(b,b+n+1,cmp);
   int p=0;
   for (int i=0;i<n;i++) {p=0;for (int j=0;j<=i;j++) p+=b[j];
   cout<<(a[0]*2)+p<<endl;}
   return 0;
}

