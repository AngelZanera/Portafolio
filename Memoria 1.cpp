#include <iostream>
using namespace std;

int main(){
	int var = 10;
	int* pointVar;
	pointVar = &var;
	cout << "Var = " << var << endl;
	cout << "Direccion de la varible var (&var) = " << &var << endl <<endl;
	cout << "Apuntador pointVar = " << pointVar << endl << endl;
	cout << "Cambia el valor de var a 7: " <<endl <<endl;
	var = 7;
	cout << "Var = " << var <<endl << endl;
	cout << "*pointVar = " << *pointVar << endl <<endl;
	cout << "Cambia el valor de *pointVar a 16:" <<endl;
	*pointVar = 18;
	cout << "Var = " << var << endl <<endl;
	cout << "Apuntador pointVar = " << pointVar <<endl;
	cout << "*pointVar = " << *pointVar << endl;
	cout << "Var = " << var << endl << endl;
	return 0;
	
}
