#include <bits/stdc++.h>
using namespace std;
void allindex(int arr[],int n, int k,int count, int i){
    if (i==n && count==0){
        cout<<-1<<endl;
        return ;
    }
    if (i==n && count >0){
        return;
    }
    if (arr[i]==k){
        cout<<i<<" ";

        count++;
        allindex(arr,n,k,count,++i);
    }
    else{
        allindex(arr,n,k,count,++i);
    }
}
int main(){
    int n=4;
    int arr[n]={9,8,7,8};
    int k=9;
    int i=0;
    int count=0;
    allindex(arr,n,k,count,i);
}