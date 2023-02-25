#include <bits/stdc++.h>
using namespace std;
void saydigits(long long int n){
    if (n==0){
        return ;
    }
    long long int ans=n%10;
    if (ans==0){
        n=n/10;
        saydigits(n);
        cout<<"Zero"<<" ";
    }
    if (ans==1){
        n=n/10;
        saydigits(n);
        cout<<"One"<<" ";
    }
    if (ans==2){
        n=n/10;
        saydigits(n);
        cout<<"Two"<<" ";
    }
    if (ans==3){
        n=n/10;
        saydigits(n);
        cout<<"Three"<<" ";
    }
    if (ans==4){
        n=n/10;
        saydigits(n);
        cout<<"Four"<<" ";
    }
    if (ans==5){
        n=n/10;
        saydigits(n);
        cout<<"Five"<<" ";
    }
    if (ans==6){
        n=n/10;
        saydigits(n);
        cout<<"Six"<<" ";
    }
    if (ans==7){
        n=n/10;
        saydigits(n);
        cout<<"Seven"<<" ";
    }
    if (ans==8){
        n=n/10;
        saydigits(n);
        cout<<"Eight"<<" ";
    }
    if (ans==9){
        n=n/10;
        saydigits(n);
        cout<<"Nine"<<" ";
    }
}
int main(){
    long long int n;
    cin>>n;
    saydigits(n);
    // Can be Optimised Using Array;
    // string arr[10]={"Zero","ONe",......}
}