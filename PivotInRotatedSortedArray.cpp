#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n,int s, int e){
    int mid=s-(s-e)/2;
    if (s>e){
        return arr[mid];
    }
    if (arr[mid]>=arr[mid-1]&&arr[mid]<=arr[mid+1]){
        return pivot(arr,n,s,mid);
    }
    if (arr[mid]<=arr[mid-1]&&arr[mid]>=arr[mid+1]){
        return pivot(arr,n,mid+1,e);
    }
    if (arr[mid]<=arr[mid-1]&&arr[mid]<=arr[mid+1]){
        return arr[mid];
    }

}
int main(){
    int arr[5]={7,2,4,5,6};
    int s=0;
    int e=5;
    int ans=pivot(arr,5,s,e);
    cout<<ans<<endl;
}