#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string std;
	ofstream file;
	file.open("text.txt");
	
	while(file){
		getline(cin, std);
		if(std=="-1")
		break;
		file<<std<<endl;
	}
	
	file.close();
//	ifstream fin;
//	fin.open("text.txt");
//	while(fin){
//		getline(fin, std);
//		cout<<std<<endl;
//	}
//	fin.close();
}
