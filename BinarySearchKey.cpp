#include <bits/stdc++.h>
using namespace std;
bool Search(int arr[],int n, int key, int s, int e){

    int mid=s-((s-e)/2);
    if (s>e){
        return false;
    }
    if (arr[mid]>key){
        return Search(arr,n,key,s,mid);
    }
    if (arr[mid]<key){
        return Search(arr,n,key,mid+1,e);
    }
    if (arr[mid]==key){
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int s=0;
    int e=n;
    bool ans= Search(arr,n,key,s,e);
    if (ans){
        cout<<"ELEMENT FOUND"<<endl;
    }
    else{
        cout<<"ERROR"<<endl;
    }

}