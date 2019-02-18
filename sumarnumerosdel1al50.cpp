/*Sumar los números pares del 1 al 50*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
int i,suma=0,n=50;

i=0;
while(i<=n){
	suma=suma+i;
	i+=2;
}cout<<"La suma de los numeros del 1 al 50 es: "<<suma<<endl;


return 0;

}
