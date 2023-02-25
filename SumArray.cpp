#include <bits/stdc++.h>
using namespace std;
int sumarray(int arr[],int n, int sum){
    if (n==0){
        return sum;
    }
    sum=arr[0]+sum;
    return sumarray(arr+1,n-1,sum);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int ans=sumarray(arr,n,sum);
    cout<<ans<<endl;
}