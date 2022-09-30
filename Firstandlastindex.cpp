#include <iostream>
using namespace std;
int first(int arr[],int n,int k){
    for (int i=0;i<n;i++){
        if (arr[i]==k){
            return i;
        }
    
        
    }
    return -1;
}
int last(int arr[],int n , int k){

    for (int j=n-1;j>=0;j--){
        if (arr[j]==k){
            return j;
        }
    
    }
    return -1;
    
}
int main() {
    int n; 
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int indexfirst = first(arr,n,k);
    cout<<indexfirst;
    int indexlast= last(arr,n,k);
    cout<<indexlast;
}  


