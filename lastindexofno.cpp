#include <bits/stdc++.h>
using namespace std;
int lastindex(int arr[],int n, int k,int i){
    if (i==-1){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }
    return lastindex(arr,n,k,--i);
 
}
int main(){
    int n=4;
    int arr[n]={9,8,7,8};
    int k=0;
    int i=n-1;
    int ans=lastindex(arr,n,k,i);
    cout<<ans<<endl;
}