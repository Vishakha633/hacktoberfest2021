#include<iostream>
using namespace std;
struct person{
	char name[50];
	int age;
	float salary;
};
person getdata(person);
void displaydata(person);
int main(){
	person p,temp;
	
	temp=getdata(p);
	p=temp;
	displaydata(p);
	
}
person getdata(person p){
	cout<<"Enter full name: ";
	cin.get(p.name,50);
	cout<<"Enter age: ";
	cin>>p.age;
	cout<<"Enter salary: ";
	cin>>p.salary;
	return p;
}
void displaydata(person p){
	cout<<"Name: "<<p.name<<endl;
	cout<<"Age: "<<p.age<<endl;
	cout<<"Salary: "<<p.salary<<endl;
}
