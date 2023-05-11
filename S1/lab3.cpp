#include <iostream>
#include <string>

using namespace std ;

template<typename T1 , typename T2 , typename T3>
T1 sum(T2 a , T3 b)
{
	//cout << a+b <<endl;
	return a+b ;
	
}

int main()
{
	int n ;
	cout << "enter size :";
	cin >> n;
	
	int *arr = new int[n];
	
	for(int i =0 ; i<n ; i++)
	{
		
		arr[i]=i*2;
	}
	
	cout << "the array is : ";
	for(int i =0 ; i<n ; i++)
	{
		cout << arr[i] << "  " ;
		
	}
	
	cout << endl ;
	
	delete[] arr ;
	
	cout << arr[3];
	
	/*
	cout<<sum<int , int , int>(8,6)<<endl;
	cout<<sum<int , char , int>('C',6)<<endl;
	cout<<sum<string,string,string>("Ahmed","Elnahass")<<endl;
	cout<<sum<double , double , int>(8.6,6)<<endl;
	*/
	/*
	cout << max1<int>(3,7) <<endl;
	cout << max1<double>(3.5,2.1) <<endl;
	cout << max1<double>(3.5,2) <<endl;
	*/
	
	/*
	string name = "ahmed" ;
	cout << "Enter your name : " ;
	//cin >> name ;
	getline(cin , name) ;
	if(name == "ahmed ali")
	{
	cout <<"your name is : " <<name << endl ;
	}
	else
	{
		cout << "invalid name" << endl ;
	}
	*/
	return 0 ;
}