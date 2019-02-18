/*Imprimir las tablas de multiplicar de un número, del 1 al 12*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){

int multiplicacion,i;

int numero=1;

for( i=1;i<=12;i++){

multiplicacion = i * numero;

cout<<numero <<" x "<< i <<"="<< multiplicacion <<endl;

}

return 0;

}
