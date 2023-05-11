#include <iostream>
#include <string>

using namespace std ;

namespace Government
{
	namespace City1
	{
		double x , y ,z, m;
		void Construct()
		{
			cout << "please entre population of City1 :" <<  endl;
			cin >> Government::City1::x;
			cout << "please entre No of families of City1 :" <<  endl;
			cin >> Government::City1::y;
			cout << "please entre No of workers of City1 :" <<  endl;
			cin >> Government::City1::z;
			cout << "please entre No of students of City1 :" <<  endl;
			cin >> Government::City1::m;
		}
		void Print()
		{
			cout << "Population Num = " << x <<  endl;
			cout << "Families Num =   " << y <<  endl;
			cout << "Workers Num =    " << z <<  endl;
			cout << "Students Num =   " << m <<  endl;
		}
		void Edit()
		{
			int a , b;
			cout << "press 0 to edit population" << endl ;
			cout << "press 1 to edit Families" << endl ;
			cout << "press 2 to edit Workers" << endl ;
			cout << "press 3 to edit Students" << endl ;
			cin  >>  a ;
			cout << "Plz enter new value" << endl ;
			cin >> b ;
			switch(a)
			{
				case 0  : 	x=b ;  break ;
				case 1  : 	y=b ;  break ;
				case 2  : 	z=b ;  break ;
				case 3  : 	m=b ;  break ;
				default :		   break ;

			}
			
		}
		void Zero()
		{
			x = y = z = m = 0 ;
		}
	}
	namespace City2
	{
		double x , y ,z, m;
		void Construct()
		{
			cout << "please entre population of City2 :" <<  endl;
			cin >> Government::City2::x;
			cout << "please entre No of families of City2 :" <<  endl;
			cin >> Government::City2::y;
			cout << "please entre No of workers of City2 :" <<  endl;
			cin >> Government::City2::z;
			cout << "please entre No of students of City2 :" <<  endl;
			cin >> Government::City2::m;
		}
		void Print()
		{
			cout << "Population Num = " << x <<  endl;
			cout << "Families Num =   " << y <<  endl;
			cout << "Workers Num =    " << z <<  endl;
			cout << "Students Num =   " << m <<  endl;
		}
		void Edit()
		{
			int a , b;
			cout << "press 0 to edit population" << endl ;
			cout << "press 1 to edit Families" << endl ;
			cout << "press 2 to edit Workers" << endl ;
			cout << "press 3 to edit Students" << endl ;
			cin  >>  a ;
			cout << "Plz enter new value" << endl ;
			cin >> b ;
			switch(a)
			{
				case 0  : 	x=b ;  break ;
				case 1  : 	y=b ;  break ;
				case 2  : 	z=b ;  break ;
				case 3  : 	m=b ;  break ;
				default :		   break ;

			}
			
		}
		void Zero()
		{
			x = y = z = m = 0 ;
		}
	}
	namespace City3
	{
		double x , y ,z, m;
		void Construct()
		{
			cout << "please entre population of City3 :" <<  endl;
			cin >> Government::City3::x;
			cout << "please entre No of families of City3 :" <<  endl;
			cin >> Government::City3::y;
			cout << "please entre No of workers of City3 :" <<  endl;
			cin >> Government::City3::z;
			cout << "please entre No of students of City3 :" <<  endl;
			cin >> Government::City3::m;
		}
		void Print()
		{
			cout << "Population Num = " << x <<  endl;
			cout << "Families Num =   " << y <<  endl;
			cout << "Workers Num =    " << z <<  endl;
			cout << "Students Num =   " << m <<  endl;
		}
		void Edit()
		{
			int a , b;
			cout << "press 0 to edit population" << endl ;
			cout << "press 1 to edit Families" << endl ;
			cout << "press 2 to edit Workers" << endl ;
			cout << "press 3 to edit Students" << endl ;
			cin  >>  a ;
			cout << "Plz enter new value" << endl ;
			cin >> b ;
			switch(a)
			{
				case 0  : 	x=b ;  break ;
				case 1  : 	y=b ;  break ;
				case 2  : 	z=b ;  break ;
				case 3  : 	m=b ;  break ;
				default :		   break ;

			}
			
		}
		void Zero()
		{
			x = y = z = m = 0 ;
		}
	}
}


template<typename T>
T sum(T a , T b , T c , T d)
{
	cout << "The sum of values " <<a+b+c+d <<endl;
}


int main()
{
	int Password=1234 , Mode ,pass , Mode2 , City;
	jump3 :
	cout << "For Admin Mode press 0 \nFor User Mode Press 1 \n" ;
	cin >> Mode ;
	switch(Mode)
	{
		case 0 : cout<<"Enter pass\n" ;
				 cin>>pass ;
				 if(pass==Password)
				 {
					 Jump :
					cout<< "0 To construct \n1 To Print \n2 TO Edit \n3 To Zero \n4 To Sum\n5 Switch to user mode\n" ;
					cin >> Mode2 ;
					if(Mode2==5)
					{
						goto jump3 ;
					}
					switch(Mode2)
					{
						case 0 :
							cout << "Choose city 1 or 2 or 3 \n" ;
							cin >> City ;
							switch(City)
							{
								case 1 : Government::City1::Construct();
									break ;
								case 2 :Government::City2::Construct();
									break ;
								case 3 :Government::City3::Construct();
									break ;
								default :
									break ;
							}
							goto Jump ;
							break ;
						
						case 1 :
							cout << "Choose city 1 or 2 or 3 \n" ;
							cin >> City ;
							switch(City)
							{
								case 1 : Government::City1::Print();
									break ;
								case 2 :Government::City2::Print();
									break ;
								case 3 :Government::City3::Print();
									break ;
								default :
									break ;
							}
							goto Jump ;
							break ;
						
						case 2 :
							cout << "Choose city 1 or 2 or 3 \n" ;
							cin >> City ;
							switch(City)
							{
								case 1 : Government::City1::Edit();
									break ;
								case 2 :Government::City2::Edit();
									break ;
								case 3 :Government::City3::Edit();
									break ;
								default :
									break ;
							}
							goto Jump ;
							break ;
							
						
						case 3 :
							cout << "Choose city 1 or 2 or 3 \n" ;
							cin >> City ;
							switch(City)
							{
								case 1 : Government::City1::Zero();
									break ;
								case 2 :Government::City2::Zero();
									break ;
								case 3 :Government::City3::Zero();
									break ;
								default :
									break ;
							}
							goto Jump ;
							break ;
						case 4 :
							cout << "Choose city 1 or 2 or 3 \n" ;
							cin >> City ;
							switch(City)
							{
								case 1 : 	
									sum<double>(Government::City1::x,Government::City1::y,Government::City1::z,Government::City1::m);
									break ;
								case 2 :
									sum<double>(Government::City2::x,Government::City2::y,Government::City2::z,Government::City2::m);
									break ;
								case 3 :
									sum<double>(Government::City3::x,Government::City3::y,Government::City3::z,Government::City3::m);
									break ;
								default :
									break ;
							}
							goto Jump ;
						
							break ;
						
						default :
							break ;
					}
					 
				 }
				 else
				 {
					 cout<<"Wrong password";
				 }
			break ;
		case 1 :
			Jump2 :
			cout<< "1 To Print\n2 To Sum\n3 To switch to Admin\n" ;
			cin >> Mode2 ;
			if(Mode2==3)
				{
					goto jump3 ;
				}
			switch(Mode2)
			{
				case 1 :
					cout << "Choose city 1 or 2 or 3 \n" ;
					cin >> City ;
					switch(City)
					{
						case 1 : Government::City1::Print();
							break ;
						case 2 :Government::City2::Print();
							break ;
						case 3 :Government::City3::Print();
							break ;
						default :
							break ;
					}
					goto Jump2 ;
					break ;
				case 2 :
					cout << "Choose city 1 or 2 or 3 \n" ;
					cin >> City ;
					switch(City)
					{
						case 1 : 	
							sum<double>(Government::City1::x,Government::City1::y,Government::City1::z,Government::City1::m);
							break ;
						case 2 :
							sum<double>(Government::City2::x,Government::City2::y,Government::City2::z,Government::City2::m);
							break ;
						case 3 :
							sum<double>(Government::City3::x,Government::City3::y,Government::City3::z,Government::City3::m);
							break ;
						default :
							break ;
					}
					goto Jump2 ;
					
					break ;
				
				default :
					break ;
			}
		default : 
			break ; 
	}
	
	
	
	Government::City1::Construct;

	 
	Government::City1::Print() ;

	Government::City1::Zero() ;
	
	Government::City1::Print() ;
	
	Government::City1::Edit();
	
	Government::City1::Print() ;
	
	sum<double>(Government::City1::x,Government::City1::y,Government::City1::z,Government::City1::m);
	
	
	
	
	
	return 0;
}