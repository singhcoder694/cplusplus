#include <bits/stdc++.h>
using namespace std;
bool find(int arr[],int n,int k){
    if (n==0){
        return false;
    }
    if (arr[0]==k){
        return true;
    }
    else{
        find(arr+1,n-1,k);
    }
}
int main(){
    int n=5;
    int arr[5]={1,5,3,2,4};
    int k=9;
    if (find(arr,n,k)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}