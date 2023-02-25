#include <bits/stdc++.h>
using namespace std;
long long int exponent(int n, int p){
    if (p==0){
        return 1;
    }
    return n*(exponent(n,p-1));
}
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    long long int ans=exponent(n,p);
    cout<<ans<<endl;
}