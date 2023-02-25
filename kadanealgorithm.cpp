#include <bits/stdc++.h>
using namespace std;
int kadanealgo(int arr[],int n,int i,int current,int finalans){
    if (i==n+1){
        return finalans;
    }
    current=current+arr[i];
    if (current<0){
        current=0;
        kadanealgo(arr,n,++i,current,finalans);
    }
    else{
        if(current>finalans){
            finalans=current;
        }
        kadanealgo(arr,n,++i,current,finalans);
    }
}
int main(){
    int n=6;
    int arr[6]={1,2,1,2,1,2};
    int i=0;
    int best=0;
    int current=0;
    int finalans=0;
    int ans=kadanealgo(arr,n,i,current,finalans);
    cout<<ans<<endl;
}