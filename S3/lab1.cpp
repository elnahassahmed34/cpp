#include <stdio.h>
#include <iostream>
#include <string>

using namespace std ;

class School 
{
	private :
		int annual_earned_money = 0 ;
		int Students_number = 0 ;
		int Max_student_number = 0 ;
		int Teacher_Number = 0;
		static int counter = 0 ;
		
	public:
	
		int School :: counter =0 
	
		School()
		{
			static int num ;
			cout<<"Hii"<< endl ;
			counter ++ ;
			
			cout << "counter = :" << counter << endl ;
		}
		~School()
		{
			cout<<"good bye"<< endl ;
		}
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
	

	
	return 0;
}