#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion,base,altura,atriangulo,radio,lado1,lado2,acuadrado;
	float acirculo;
	const float PI=3.1415;
	cout << "Escoja el numero de la opcion segun el area que desea calcular : "<<"\n"  <<"-1.Calcular area del triangulo" <<"\n"  <<"-2.Calcular area del circulo" <<"\n"  <<"-3.Calcular area del cuadrado "<<"\n";
	cin >>opcion;
	if (opcion==1){
		cout <<"Digite la base : ";
		cin >>base;	
		cout <<"Digite la altura : ";
		cin >>altura;
		atriangulo=(base*altura)/2;
		cout <<"El area del triangulo es : " <<atriangulo;
	}
	if (opcion==2){
		cout <<"Digite el radio : ";
		cin >>radio;	
		acirculo=PI*(radio*radio);
		cout <<"El area del circulo es : " <<acirculo;
	}
	if (opcion==3){
		cout <<"Digite lado 1 : ";
		cin >>lado1;
		cout <<"Digite lado 2 : ";
		cin >>lado2;	
		acuadrado=lado1*lado2;
		cout <<"El area del cuadrado es : " <<acuadrado;
	}
	return 0;
}
