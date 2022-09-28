#include <iostream>
using namespace std;
//Brutforce Method to find to unique element array

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n1;
    cin>>n1;
    int arr1[1000];
    for (int j=0;j<n1;j++){
        cin>>arr1[j];
    }
    for (int i=0;i<n;i++){
        
        for (int j=0;j<n1;j++){
            if (arr[i]==arr1[j]){
                cout<<arr[i]<<" ";
                arr[j]=-12345;
                break;
            }
            
           
        
        }
 

     
    }
}

        

            