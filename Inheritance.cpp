#include<iostream>
using namespace std;
class Test1{
	protected:
		int x,y;
};
class Test2:public Test1{
	private:
		int z;
	public:
		void input(){
			cout<<"Input x = ";cin>>x;
			cout<<"Input y = ";cin>>y;
			cout<<"Input z = ";cin>>z;
		}
		void output(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			cout<<"z = "<<z<<endl;
		}
};
int main(){
	Test2 obj;
	obj.input();
	obj.output();
}
