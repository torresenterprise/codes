#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int soma(int a, int b) {
	return a+b;
}

int subtracao(int a, int b) {
	return a-b;
}

int multiplicacao(int a, int b) {
	return a*b;
}
/*
int divisao(int a, int b) {

}
*/

int calculadora(int op, int a, int b) {

	int ret;

	if(op == 0) ret = soma(a,b);
	else if(op == 1) ret = subtracao(a,b);
	else if(op == 2) ret = multiplicacao(a,b);
}

int main() {
/*
	cout << "Essa é uma calculadora básica. Digite:" << endl << endl;
	cout << "0 - soma:" << endl;
	cout << "1 - subtração:" << endl;
	cout << "2 - multiplicação:" << endl;
*/
	int op, a, b;
	
	while(cin >> op >> a >> b) {
		int resultado = calculadora(op, a, b);
		cout << resultado << endl;
	}

	return 0;
}
