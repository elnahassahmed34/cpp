#include <iostream>
#include <string>

using namespace std;

class Base
{
	public :
		
		virtual void myfunction(int x , int y)
		{
			cout << "Derived 1 " << endl;
		}
}; 

class Derived : public Base
{
	public :
		
		void myfunction(int x , int y) override {
			
			cout << "Derived 1 " << endl;
		}
};


int main () 
{
	Derived d1 ;
	d1.myfunction(20,30);
	
	
	return 0 ;
}