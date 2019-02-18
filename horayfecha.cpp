#include<stdio.h> 
#include<conio.h> 
#include<time.h> 

int main() 
{ 
time_t timer; 
struct tm *tblock; 

/* coge el tiempo actual */ 
timer = time(NULL); 
/* convierte el dato del tiempo a una estructura */ 
tblock = localtime(&timer); 
printf("El tiempo local es: %s", asctime(tblock)); 

getch(); 
}

