#include<iostream>
using namespace std;
void test();
int v=15;
int main() {
	//int v=16;
	++v;
	cout<<v<<" ";
	test();
}
void test(){
    ++v;
    cout<<v;
}
