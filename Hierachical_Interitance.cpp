#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B:public A{
	protected:
		int b;
	public:
		void input(){
			cout<<"Input a = ";cin>>a;
		}
		void output(){
			cout<<"\ta = "<<a<<endl;
		}
};
//subclass
class C:public A{
	protected:
		int c;
};
//subclass
class D:public B,public C{
	protected:
		int d;
	public:
		void input(){
			B::input();
			cout<<"Input b = ";cin>>b;
			cout<<"Input c = ";cin>>c;
			cout<<"Input d = ";cin>>d;
		}	
		void output(){
			B::output();
			cout<<"\tb = "<<b<<endl;
			cout<<"\tc = "<<c<<endl;
			cout<<"\td = "<<d<<endl;
		}
};
int main(){
	D obj;
	obj.input();
	obj.output();
}
