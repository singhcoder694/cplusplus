#include <iostream>
using namespace std;
void swaparr(int arr[],int n){
    for (int i=0;i+1<n;i=i+2){

        swap(arr[i],arr[i+1]);
    }
}
void printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    swaparr(arr,n);
    printarr(arr,n);
}