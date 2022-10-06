#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[2100];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for (int i=0;i<n-1;i++){
        int MaxIndex=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]>arr[MaxIndex]){
                MaxIndex=j;
                
            }
        }
        swap(arr[MaxIndex],arr[i]);
    
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}