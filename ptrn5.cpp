//half pyramid using numbers
#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i>=j){
				cout<<i;
			}
		}
		cout<<endl;
	}
}
