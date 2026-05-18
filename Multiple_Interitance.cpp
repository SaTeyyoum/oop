#include<iostream>
using namespace std;
//Super class 1
class Dad{
	protected:
		string dad;
		int age,id;
	public:
	void input(){
		cout<<"Your dad id    : ";cin>>id;
		cout<<"Your dad name  : ";cin>>dad;
		cout<<"Your dad age   : ";cin>>age;
	}
	void output(){
		cout<<id<<"\t";
		cout<<dad<<"\t";
		cout<<"\t"<<age<<"\t";
	}
	int getAge() const{
			return age;
		}
	int getId() const{
			return id;
		}
};
//Super class 2
class Mom{
	protected:
		string mom;
		string dob;
		int age,id;
	void input(){
		cout<<"Your mom id    : ";cin>>id;
		cout<<"Your mom name  : ";cin>>mom;
		cout<<"Your mom age   : ";cin>>age;
	}
	void output(){
		cout<<"\t"<<id<<"\t";
		cout<<"\t"<<mom<<"\t";
		cout<<"\t"<<age<<"\t";
	}
};
//Sun class 
class Son: public Dad,public Mom{
	private:
		string son;
		public:
			void input(){
				Dad::input();
				Mom::input();
				cout<<"Son name  : ";cin>>son;
			}
			void output(){
				Dad::output();
				Mom::output();
				cout<<"\t"<<son<<"\t"<<endl;
			}
			void header(){
				cout<<"Id dad\tName Dad\tAge dad\t\tId mom\t\tName Mom\tAge mom\t\tName son"<<endl;
			}
};
int main(){
	Son son[10];
	system("color");
	int i,n=0,add,j,op;
	do{
		cout<<"1.Input\t"
			<<"\t2.Output\t"
			<<"3.Search\t"
			<<"4.Update\t"
			<<"5.Delete\t"<<endl
			<<"6.Insert\t"
			<<"7.Sort\t"
			<<"\t8.Clear\t"
			<<"\t9.Exit"<<endl;
		cout<<"pleas choose option :";cin>>op;
		switch(op){
			case 1:{
				cout<<"Enter number for add :";cin>>add;
				for(i=n;i<n+add;i++){
					cout<<"\033[34m==============Input===============\033[0m"<<endl;
					son[i].input();
				}n=+add;
			}break;
			case 2:{
				son[i].header();
				cout<<"\033[35m==============Output==============\033[0m"<<endl;
				for(i=0;i<n;i++){
					son[i].output();
				}
			}break;
			case 3:{
				int search;
				cout<<"Enter id for search :";cin>>search;
				son[i].header();
				for(i=0;i<n;i++){
					if(son[i].getId()==search){
					son[i].output();
					}
				}
			}break;
			case 4:{
				int Update;
				cout<<"Enter id for update : ";cin>>Update;
				for(i=0;i<n;i++){
					if(son[i].getId() == Update){
						son[i].input();
					}
				}
			}break;
			case 5:{
				int Delete;
				cout<<"Enter id for delete ";cin>>Delete;
				for(i=0;i<n;i++){
					if(son[i].getId() == Delete){
						for(j=i;j<n;j++){
							son[j]=son[j+1];
						}
						n--;
					}
				}
				cout<<"Delete successful.......!"<<endl;
			}break;
			case 6:{
				int Insert;
				cout<<"Enter id for insert ";cin>>Insert;
				for(i=0;i<n;i++){
					if(Insert == son[i].getId()){
						for(j=n;j>i;j--){
							son[j] = son[j-1];
						}
						n++;
						son[i].input();
						break;
					}
				}
			}break;
			case 7:{
				Son Sort;	
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(son[i].getId()<son[j].getId()){
							Sort  =son[i];
							son[i]=son[j];
							son[j]=Sort;
						}
					}
				}
				son[i].header();
				for(i=0;i,n;i++){
					son[i].output();
				}
			}break;
			case 8:{
				
				
			}break;
		}
		system("pause");
	}while (op!=10);
}
