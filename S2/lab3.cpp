#include <stdio.h>
#include <iostream>
#include <string>

using namespace std ;
/*
namespace total
{
	namespace circle
	{
		double x;
	    double y;
		void print()
		{
			std::cout << "circle area = " << x+y << std::endl;
		    std::cout << "x = " << total::circle::x << " " << " y = " << total::circle::y << std::endl;
		}
	}
	
    
}
*/
struct rectangle
{
	int width ;
	int height ;
	
	int area()
	{
		return width * height ;
	}
	
	void print(void)
	{
		cout << "Recatangle : " << width << " " << height << endl ;
	}
	
};

void fun(int & a)
{
	a++ ;
}

class School 
{
	private :
		int annual_earned_money = 0 ;
		int Students_number = 0 ;
		int Max_student_number = 0 ;
		int Teacher_Number = 0;
		
	public:
		string School_Name ;
		void Set_name()
		{
			cout << "Enter School name :" << endl;
			cin >> School_Name ;
		}
		void Add_Student()
		{
			Students_number++ ;
		}
		void Add_Teache()
		{
			Teacher_Number++ ;
		}
		void Set_Max_Students(int number)
		{
			if (number<1000)
			{
				Max_student_number = number ;
			}
			else
			{
				cout << "Invalid number" << endl ;
			}
		}


		void show_school_data(void)
		{
			cout << "THe name of school : "<< School_Name << endl ;
			cout << "The number of students :" << Students_number << endl ;
			cout << "The maximum Student number" << Max_student_number << endl ;
			cout << "Teacher Number : :" << Teacher_Number << endl ;
			
		}

};


int main()
{
	School S1 ;
	
	S1.Set_name();
	
	S1.Add_Student();
	S1.Add_Student();
	S1.Add_Student();
	S1.Add_Student();
	
	S1.Set_Max_Students(100);
	
	S1.Add_Teache();
	
	S1.show_school_data();
	
	cout<<"--------------------------" <<endl ;
	
	School S2 ;
	
	S2.Set_name();
	
	S2.Add_Student();
	S2.Add_Student();
	S2.Add_Student();
	S2.Add_Student();
	S2.Add_Student();
	S2.Add_Student();
	S2.Add_Student();
	
	S2.Set_Max_Students(90);
	
	S2.Add_Teache();
	S2.Add_Teache();
		
	S2.show_school_data();
	

/*{
	int x = 5 ;
	int y = 10 ;
	int& ref = x ;
	cout << "ref points to " << ref << endl;
	ref = y ;
	cout << "ref points to " << ref << endl;
	cout << "X : " << x << endl;
	fun(y);
	cout << "Y : " << y << endl;
	
	/*
	rectangle r1 ;
	r1.width = 5 ;
	r1.height = 10 ;
	
	cout << "Area : " << r1.area() << endl ;
	r1.print(); 
	*/
	
	return 0;
}