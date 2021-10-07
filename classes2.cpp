#include<iostream>
using namespace std;
class Room{
	private:
		double length;
		double breadth;
		double height;
	public:
		void initdata(double len, double brth,double hgt){
			length=len;
			breadth=brth;
			height=hgt;
		}
		
		double calculatearea(){
			return length*breadth;
		}
		double calculatevolume(){
			return length*breadth*height;
		}
};

int main(){
	Room room1;
//	room1.length=42.5;
//	room1.breadth=30.8;
//	room1.height=19.2;
 room1.initdata(42.5,30.8,19.2);
	
	cout<<"Area of room= "<<room1.calculatearea()<<endl;
	cout<<"Volume of room= "<<room1.calculatevolume()<<endl;
}
