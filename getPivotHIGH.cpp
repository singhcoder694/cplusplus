#include <iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0; 
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e){
        if (arr[mid]<=arr[0]){
            e = mid - 1;
        }
        else {
            s = mid;

        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int n; 
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=getPivot(arr,n);
    cout<<index;
}