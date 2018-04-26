#include <stdio.h>
//se declara la funcion cuotas
//en la funcion se declara la cuota inicial como 5 
//se declara la variable m para el mes 
//se declara la variable aux1 para un contador de las cuotas
//la funcion for suma los 20 meses correspondientes
//la variable aux los acomula
//se expresa la cuota correspondiente a cada mes
//se expresa el total a pagar
//se inicia el algoritmo
//se usa la funcion declarada anteriormente
//fin del algoritmo
	int cuotas(){
		int cuotainicial=5;
		int m;
		int aux1;
		for (m=1;m<=20;m++){
			cuotainicial=cuotainicial*2;
			aux1=aux1+cuotainicial;
			printf("El mes %d se debe pagar: %d \n", m, cuotainicial);
		}
	printf("El total a pagar es de: %d", aux1);
	return m;
	}
int main (){
	printf("Algoritmo para determinar el valor de las cuotas y el precio final \n");
	cuotas ();
	return 0;


}
