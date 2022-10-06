#include <iostream>
using namespace std;
bool isPossible(int arr[],int n , int m , int mid){
    int painterCount=1;
    int time=0;
    for (int i=0;i<n;i++){
        if (time + arr[i]<=mid){
            time+=arr[i];

        }
        else {
            painterCount++;

            if (painterCount>m || arr[i]>mid){
                return false;
            }
            time=arr[i];
        }
        
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[2100];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int sum=0;
    for (int i =0;i<n;i++){
        sum+=arr[i];
    }
    int e = sum;
    
    int ans=0;
    int mid = s+(e-s)/2;
    while(s<=e){
        if (isPossible(arr,n,m,mid)){
            ans = mid ;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    cout<<ans;

}



