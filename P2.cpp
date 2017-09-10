#include<iostream>
using namespace std;
int dx[9] = {0,0, 0, -1, 1,1,-1,1,-1}; 
int dy[9] = {0,-1, 1, 0, 0,1,1,-1,-1}; 
int main()
{
   char a[105][105];
   int n,m;
   cin>>n>>m;
   for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
     cin>>a[i][j];
   for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
     {
     	 int ans=0,x,y;
		 if (a[i][j]!='*')
     	 {for (int k=1;k<=8;k++)
     	  {x=i+dx[k]; y=j+dy[k];
     	  if ((x>0)&&(x<=n)&&(y>0)&&(y<=m)&&(a[x][y]=='*')) 
		    ans++;}
		 a[i][j]=ans+'0'; }
	 }
	for (int i=1;i<=n;i++)
     {for (int j=1;j<=m;j++)
       cout<<a[i][j];
      cout<<endl;}
   return 0;
}

