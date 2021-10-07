#include<iostream>
using namespace std;
int main(){
	int i,j,c,n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i<=n+1-j){
				cout<<j;
			}
		}
		cout<<endl;
	}
}
