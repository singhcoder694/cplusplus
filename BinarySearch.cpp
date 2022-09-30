#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while (start<=end){
        if (key == arr[mid]){
            return mid;
        }
        else if (key<arr[mid]){
            end = mid-1;

        }
        else if (key>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int n;
    cin>> n;
    cout<<"Enter array in increasing order:";
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key; 
    cout<<"Enter the key whose index want to find:";
    cin>>key;
    
    int index = binarySearch(arr,n,key);
    cout<<index;

}