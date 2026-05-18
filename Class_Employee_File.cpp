#include<iostream>
#include<fstream>
using namespace std;
class Employee{
	private:
		int id;
		char name[10],gender[10];
		float salary;
	public:
	int getId() const{
		return id;
	}
	void setId(int id){
		Employee::id=id;
	}
	const char *getName() const{
		return name;
	}
	const char *getGender() const{
		return gender;
	}
	float getSalary() const{
		return salary;
	}
	void setSalary(float salary){
		Employee::salary=salary;
	}
	void input(){
		cout<<"Input id    : ";cin>>id;
		cout<<"Input name  : ";cin>>name;
		cout<<"Input gender: ";cin>>gender;
		cout<<"Input salary: ";cin>>salary;
	}
	void output(){
		cout<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t$"<<salary<<endl;
	}
	static void header(){
		cout<<"\tId\tName\tGerder\tSalary\n";
	}
};
int main(){
	Employee emp;
	fstream file1,file2;
	file1.open("employee.txt",ios::out);//out is open file for write
	file2.open("employee.txt",ios::in);//in is open file for read
	//write data into file
	if(file1.is_open()){
		cout<<"File is opened"<<endl;
		emp.input();
		file1.write((char*)&emp,sizeof(emp));
	}else{
		cout<<"Failed to open file"<<endl;
		exit (0);
	}
	file1.close();
	//read data from file
exit (0);	if(file2.is_open()){
		cout<<"File is opened"<<endl;
		emp.header();
		while(file2.read((char*)&emp,sizeof(emp))){
			emp.output();
		}
	}else{
		cout<<"Failed to open file"<<endl;
		exit (0);
	}
	file2.close();
}
