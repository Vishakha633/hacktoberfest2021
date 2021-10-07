#include<iostream>
using namespace std;
class Room{
	public:
		double length;
		double breadth;
		double height;
		
		double calculatearea(){
			return length*breadth;
		}
		double calculatevolume(){
			return length*breadth*height;
		}
};

int main(){
	Room room1;
	room1.length=42.5;
	room1.breadth=30.8;
	room1.height=19.2;
	
	cout<<"Area of room= "<<room1.calculatearea()<<endl;
	cout<<"Volume of room= "<<room1.calculatevolume()<<endl;
}
