#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int unet=0;
    for (int i=0;i<n;i++){
        
        unet=unet^arr[i];
    }
    cout<<unet;
}