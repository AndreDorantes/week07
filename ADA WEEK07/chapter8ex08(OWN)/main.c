#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c;
	double x1, x2, D;
	cout << "Este programa resuelve una cuadratica!" << endl;
	cout << "La cuadratrica es de la forma ax^2+bx+c = 0" << endl;
	cout << "Da el valor de a:" ;
	cin >> a;
	cout << "Da el valor de b:" ;
	cin >> b;
	cout << "Da el valor de c:" ;
	cin >> c;
	if (a !=0) {
		  D = b*b-4*a*c;  //pow(b, 2)
		  if (D >= 0) {
		  	x1= (-b + pow(D, 0.5))/(2*a);
			x2= (-b - pow(D, 0.5))/(2*a);
			cout << "Las soluciones son:" << endl ;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl ;
		  }
		  else 
		    cout << " Las raices son complejas" ;
	}
	else if (b = 0) {
		x1 = -c/b;
		cout << " La unica solucion es: " << x1;
	}
	else cout << " No es una solucion valida";
	return 0;
}
