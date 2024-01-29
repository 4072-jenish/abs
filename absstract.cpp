#include<iostream>
#include<string.h>

using namespace std;

class admin{
	
	public:
		
    void employee(){
    	
    cout << "employee name :- joy "<<endl;
    cout <<"employee salary :- 25000"<<endl;
    cout <<"company's name :-boat "<< endl;
    
	}
	
    protected:
    	
		void manager(){
	cout << "manager's name :- manoj "<<endl;
	cout <<"manager's salary :- 55000"<<endl;
	cout <<"company's name :- boat "<<endl;
	cout <<"total staff is :- "<<endl;
		
	  void admin(){
	  	
	cout <<"admin's name :- bhatiya "<<endl;
	cout <<"admin's salary :- 1,50,000"<<endl;
	cout <<"total annual revenue is 15,00,00,000"<<endl;
	  
	  }
};
class manager : public admin   
{
  
};

int main(){
	
	admin a1;
	manager m1;
	a1.employee();
	a1.manager();
	
	
return 0;
}




