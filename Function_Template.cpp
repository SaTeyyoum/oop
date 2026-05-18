#include<iostream>
using namespace std;
template <typename A>
A Sum(A key,A value){
	cout<<"Key   = "<<key<<endl;
	cout<<"value = "<<value<<endl;
}
int main(){
	Sum ("Dara","makra");
	Sum(10,20);
	Sum(10.2f,20.8f);
}
