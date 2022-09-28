#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int i=1;
	while (i<=n){
		int space=1;
		while (space<=n-i){
			cout<<" ";
			space=space +1;
		}
		int j=1;
		while (j<=i){
			cout<<j;
			j=j+1;
		}
		int k=1;
		while (k<i){
			cout<<i+k;
			k=k+1;
		}
	
		     
		cout<<endl;
		i=i+1;
	}
	int i1=1;
	while (i1<=2*n-1){
		int space2 =1;
		while (space2<=i1){
			cout<<" ";
			space2=space2+1;
		}
		int j1=1;
		while (j1<=(2*n-1)-2*i1){
			cout<<j1;
			j1=j1+1;
		}
		cout<<endl;
		i1=i1+1;
	}
}