#include<iostream>
using namespace std;
void display(string s){
	cout<<"entered string is: "<<s<<endl;
}
void display(char s[]){
	cout<<"entered char array is: "<<s<<endl;
}
int main(){
	string str1;
	char str[100];
	
	cout<<"enter a string: ";
	getline(cin,str1);
	
	cout<<"enter another string: ";
	cin.get(str,100);
	
	display(str1);
	display(str);
}

