#include<iostream>
using namespace std;
void display(char='*',int = 3);
int main(){
	int count = 5;
	cout << "no argument passed ";
	display();
	
	cout<< "first aru passed ";
	display('@');
	
	cout << "both aru passed ";
	display('&',count);
}
void display(char c,int count){
	for(int i=1;i<=count;++i){
		cout << c;
	}
	cout << endl;
}
