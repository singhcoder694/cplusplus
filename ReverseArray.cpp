#include <iostream>
using namespace std;
void reversearr(int arr[],int n){
    int start=0;
    int end = n-1;
    while (start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;


    }
}
void printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"No. of elements:"<<endl;
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    reversearr(arr,n);
    printarr(arr,n);
}