#include<stdio.h>
typedef struct{
	char nombre[30];
	int dni, edad;
}DATOS;
 void carga_persona(DATOS*);
 void muestra_dato(DATOS);
 int main(){
	DATOS per;
	carga_persona(&per);
	muestra_dato(per);
	return 0;
 }
void carga_persona(DATOS* d){
	printf("Ingrese el nombre\n");
	gets(d->nombre);
	fflush(stdin);
	printf("Ingrese el DNI\n");
	scanf("%i", &d->dni);
	fflush(stdin);
	printf("Ingrese la edad\n");
	scanf("%i",&d->edad);
}
void muestra_dato(DATOS p){
	printf("La Edad es: %i\n", p.edad);
	printf("El DNI es: %i\n", p.dni);
	printf("El Nombre es: %s",p.nombre);
}
