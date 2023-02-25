#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n,int s){
    if (s==n-1 || n==1 || n==0){
        return true;
    }
    if ((arr[s]>=arr[s-1]&&arr[s]<=arr[s+1]) || (arr[s]<=arr[s-1]&& arr[s]>=arr[s+1])){
        isSorted(arr,n,s+1);
    }

    else{
        return false;
    }


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=1;
    bool ans=isSorted(arr,n,s);
    if (ans){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not Sorted"<<endl;
    }
}