#include <iostream>
#include<string>
using namespace std;


 class Triangle
 
 {
 	private:
 		int x,y;
 		
 	public:
	 	void set_value(int, int);
	 	int area()
	 	{
	 		return (x*y)/2;
		 }
 };
 
 void Triangle::set_value(int h , int b)
 {
 	x = h;
 	y = b;
 	
 }
 
 int main()
 {
 	Triangle value;
 	value.set_value(11,10);
 	value.area();
 	cout<<value.area();
 }
 
