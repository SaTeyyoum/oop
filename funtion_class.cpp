#include<iostream>
using namespace std;
template <class T>
class Test{
	private:
		 T a,b;
	public:
		void setA(T a){
			this->a=a;
		}
		void setB(T b){
			Test::b=b;
		}
		void output(){
			cout<<"A  = "<<a<<endl;
			cout<<"B  = "<<b<<endl;
		}
};
int main(){
	Test <string>obj;
	obj.setA(string("Bopha"));
	obj.setB(string("Dary"));
	obj.output();
}
