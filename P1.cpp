#include<stdio.h>
#include<iostream>
using namespace std;
int n;
int num;
int main(){
    cin>>n;
    int k=1,x=1,i=1;
    bool flag=0;
    while(1){
       for(int j=1;j<=k;j++){
          num+=k;  
          i++;
          if(i>n){
             x=0;
             flag=1;
             break;
          }
       }
       if(flag)
          break;
       k++;
    }
    cout<<num;
    return 0;
}
