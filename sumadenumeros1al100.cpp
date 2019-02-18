/*Sumar los números del 1 al 100*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
int i,suma=0,n=100;

i=1;
while(i<=n){
	suma=suma+i;
	i++;
}cout<<"La suma de los numeros del 1 al 100 es: "<<suma<<endl;


return 0;

}
