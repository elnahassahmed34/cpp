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

class company 
{
	private :
		int annual_earned_money = 0 ;
		int employee_number = 0 ;
		int customer_employee = 0 ;
		int average_employee_salary = 0;
		
	public:
		void Add_employee(void);
		void Add_Customer();
		void Set_average_employee_salalry(int salary_local);
		void Set_annual_money(int target_value)'
		void show_company_data(void)'

};


int main()
{
	company valeo ;
	
	valeo.Add_Customer();
					  
	valeo.Add_employee();
	valeo.Add_employee();
	valeo.Add_employee();
	valeo.Add_employee();
	valeo.Add_employee();
		
	valeo.Set_average_employee_salalry(1500);
	
	valeo.Set_annual_money(20000);
	
	valeo.show_company_data();
	
	company BMW ;
	
	BMW.Add_Customer();
	BMW.Add_Customer();
	BMW.Add_Customer();
	BMW.Add_Customer();
	
	BMW.Add_employee();	
	BMW.Add_employee();
	BMW.Add_employee();
	BMW.Add_employee();
	BMW.Add_employee();
	BMW.Add_employee();
	BMW.Add_employee();
	
	BMW.Set_average_employee_salalry(2000);
	BMW.Set_annual_money(10000);
	BMW.show_company_data();


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
void company::Add_employee(void)
{
	if(employee_number < 100)
	{
		employee_number++ ;
	}
}
void company::Add_Customer()
{
	customer_employee++ ;
}
void company::Set_average_employee_salalry(int salary_local)
{
	if(salary_local>1000)
	{
		average_employee_salary = salary_local;
	}
	else
	{
		cout << "Invalid Salary Value" << endl ;		
	}
}
void company::Set_annual_money(int target_value)
{
	annual_earned_money = target_value ;
}

void company::show_company_data(void)
{
	cout<<"anual earned money = " << annual_earned_money << endl;
	cout<<"average employee salary = " << average_employee_salary << endl;
	cout<<"employee number = " << employee_number << endl ;
	cout << "customer number = "<< customer_employee << endl ;
}