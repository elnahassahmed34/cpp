#include <iostream>
#include <string>

using namespace std ;

namespace a 
{
	void print(void)
	{
		cout << "hello iam namespace a" << endl ;
	}
	
}

namespace b 
{
	void print(void)
	{
		cout << "hello iam namespace b" <<endl ;
	}
	
}

int main()
{
	
	a::print();
	b::print();
	
	//cout<<"hello" << endl ;
	
	//std::cout<<"helo world"<<std::endl;
	
	//int a = 10 ;
	//int b = 10 ;
	//std::cout<<"a+b = "<< a+b <<std::endl;
	
//	int x , y ;
// 	std::cout<<"please enter two numbers " ;
// 	std::cin >> x >> y   ;
// 	char op ;
// 	std::cout<<"please enter operation " ;
// 	std::cin >> op   ;
	
// 	switch(op)
// 	{
// 		case '+' :	std::cout<<	"the summation      : " <<x+y << std::endl;  break ;
// 		case '-' :	std::cout<<	"the subtraction    : " <<x-y << std::endl;  break ;
// 		case '*' :	std::cout<<	"the multiplication : " <<x*y << std::endl;  break ;
// 		case '/' :	std::cout<<	"the division       :  " <<x/y << std::endl; break ;
// 		default  :                                                           break ;

// 	}
	

	
	
	return 0 ;
}