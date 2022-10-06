#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for (int i=0;i<n ; i++){
        if (arr[i]>ans){
            ans=arr[i];
        }
    }
    int ans1=INT_MAX;
    for (int i=0;i<n;i++){
        if (arr[i]<ans1){
            ans1=arr[i];
        }
    }
    cout<<ans-ans1;
    

    
}
    