#include <stdio.h>
#include <iostream>
#include <string>

using namespace std ;

class company 
{
	private :
		int annual_earned_money = 0 ;
		int employee_number = 0 ;
		int customer_employee = 0 ;
		int average_employee_salary = 0;
		
	public:
		compony operator ++()
		{
			++customer_employee;
			++employee_number;
		}
	
		company():annual_earned_money(0),employee_number(10),customer_employee(10),average_employee_salary(0)
		{
			cout  << "Initialization Done" << endl;
		}
		void Add_employee(void)
		{
			if(employee_number < 100)
			{
				employee_number++ ;
			}
		}
		void Add_Customer()
		{
			customer_employee++ ;
		}
		void Set_average_employee_salalry(int salary_local)
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
		void Set_annual_money(int target_value)
		{
			annual_earned_money = target_value ;
		}

		void show_company_data(void)
		{
			cout<<"anual earned money = " << annual_earned_money << endl;
			cout<<"average employee salary = " << average_employee_salary << endl;
			cout<<"employee number = " << employee_number << endl ;
			cout << "customer number = "<< customer_employee << endl ;
		}

};


int main()
{
	company valeo(10) ;
	
	valeo.Add_Customer();
					  
	valeo.Add_employee();
	valeo.Add_employee();
	valeo.Add_employee();
	valeo.Add_employee();
	valeo.Add_employee();
		
	valeo.Set_average_employee_salalry(1500);
	
	valeo.Set_annual_money(20000);
	
	valeo.show_company_data();
	
	company BMW() == ++valeo ;
	
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



	
	return 0;
}