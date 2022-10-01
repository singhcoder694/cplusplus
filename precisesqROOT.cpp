#include <iostream>
using namespace std;
long long int sqrroot(long long int n){
    long long int s=0;
    long long int e=n;
     int mid=s+(e-s)/2;
     int ans=0;
    while (s<=e){
        if (mid*mid>n){
            e=mid-1;
        }
        else if (mid *mid<n){
            ans = mid;
            s = mid + 1;
        }
        else {
            return mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
double precise(long long int n,int precision, int root){
    double factor=1;
    double ans=0;
        for (int i =0;i<precision;i++){
            factor=factor/10;
            for (double j=root;j*j<n;j=j+factor){
                ans=j;
            }
        }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the Number"<<" ";
    cin>>n;
    int precision;
    cout<<"Digit of precision"<<" ";
    cin>>precision;




    int root=sqrroot(n);
    
    double preciseroot=precise(n,precision,root);
    cout<<"Square root of  "<<n<<" "<<"till  "<<precision<<" "<<"precise digit is  :"<<preciseroot;
    

}