#include<iostream>
using namespace std;
int i=2,c=0,arr[100],n,j;
void fuc(int);
int main()
{
	int n;
	cout<<"enter num: ";
	cin>>n;
	fuc(n);
	return 0;
}
void fuc(int n){
	//int i=2 c=0, arr[100];
	while(n!=0){
	if(n%i==0){
	//	cout<<i;
		n=n/i;
		arr[c]=i;
		cout<<i<<endl;
		c++;
    	fuc(n);
	}
	else{
	i++;
	fuc(n);
    }

 }
    for(j=0;j<=c;j++){
	cout<<arr[c]<<endl;
       }
}
 
