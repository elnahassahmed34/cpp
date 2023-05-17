#include <iostream>
#include <string>

using namespace std ;

class Hospital 
{
	private :
		int annual_earned_money = 0 ;
		int Patients_number = 0 ;
		int Max_patients_number = 0 ;
		int Doctor_Number = 0;
		
	public:
		string Hospital_Name ;
		void Set_name()
		{
			cout << "Enter Hospital name :" << endl;
			cin >> Hospital_Name ;
		}
		void Add_Patient()
		{
			Patients_number++ ;
		}
		void Add_Doctor()
		{
			Doctor_Number++ ;
		}
		void Set_Max_Patients(void)
		{
			int number ;
			cout << "Enter the max number of patients\n" ;
			cin >> number ;
			if (number<1000)
			{
				Max_patients_number = number ;
			}
			else
			{
				cout << "Invalid number" << endl ;
			}
		}


		void show_Hospital_data(void)
		{
			cout << "THe name of Hospital : "<< Hospital_Name << endl ;
			cout << "The number of Patients :" << Patients_number << endl ;
			cout << "The maximum Patient number" << Max_patients_number << endl ;
			cout << "Doctor Number : :" << Doctor_Number << endl ;
			
		}

};


int main()
{	
	int x ;
	Hospital H1 ;
	H1.Set_name();
	H1.Set_Max_Patients();
	
	int flag = 0 ;
	while(flag == 0)
	{
	
		cout << "1 Add doctor\n2 Add Patient\n3 print\n4 exit\n" ;
		cin >> x ;
		
	
		switch(x)
		{
			case 1 : H1.Add_Doctor() ;
				break ;
			case 2 : H1.Add_Patient() ;
				break ;
			case 3 : H1.show_Hospital_data() ; 
				break ;
			case 4 : flag = 1 ;
				break ;
			default :
				break ;
			
		}
	
	
	}
	
	
	return 0;
}