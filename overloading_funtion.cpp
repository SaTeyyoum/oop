#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		string name;
		string gender;
	public:
		//defauld
		Employee(){
			id=0;
			name="Null";
			gender="f";
		}
		Employee(int id){
			this->id =id;
		}
		Employee(int id,string name){
			this->id =id;
			this->name=name;
		}
		Employee(int id,string name,string gender){
			this->id =id;
			this->name=name;
			this->gender=gender;
		}
		void output(){
			cout<<"\tId      = "<<id<<endl;
			cout<<"\tName    = "<<name<<endl;
			cout<<"\tGender  = "<<gender<<endl;
		}
		void output(int id){
			cout<<"\tId      = "<<id<<endl;
		}
		void output(int id,string name){
			cout<<"\tId      = "<<id<<endl;
			cout<<"\tName    = "<<name<<endl;
		}
		void output(int id,string name,string gender){
			cout<<"\tId      = "<<id<<endl;
			cout<<"\tName    = "<<name<<endl;
			cout<<"\tGender  = "<<gender<<endl;
		}
//		void operator--(){
//			id--;
//		}
//			void operator++(){
//			id+=3;
//		}
};
int main(){
	Employee emp(20,"Sara","female");
	//--emp;
	//++emp;
	emp.output();
}
