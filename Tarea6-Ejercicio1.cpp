#include <iostream>
using namespace std;
// FUNCIÓN PARA REALIZAR EL CUBO
int cubo (int x){
		int op=x*x*x;
		return op;
	}
main (){
	
	int n;
	cout << "Ingrese un numero para realizar el cubo"  << endl;
	cin >> n;
	cout <<   "El cubo de " << n << " es: " << cubo(n) << endl;
} 
