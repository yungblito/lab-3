#include <stdio.h>
//se declara la funcion principal del programa
//se declaran las variables a usar en el for
//en el for se esteblece como dia inicial uno, final el 6 y que aumente de 1 en 1
//se pide al usuario ingresar las horas trabajadas en los dias correspondientes
//la funcion va sumando las horas ingresadas
//finaliza la funcion
//se inicia el algoritmo asumiendo una paga de 12 dolares la hora
//se multiplican las horas trabajadas por la paga para calcular el sueldo total
//se muestra el sueldo total al usuario
//fin del algoritmo

	float horast(){
		int d=0;
		float h=0.0;
		float aux1=0.0;
		for (d=1;d<=6;d++){
			printf("Ingrese las horas trabajadas el dia %d: \n", d);
			scanf("%f", &h);
			aux1=h+aux1;
		}
	return aux1;
	}

int main (){
	printf("Calculadora sueldo total en base a horas trabajadas en la semana \n");
	printf("La paga es de 12 dolares la hora \n");
	float sueldot;
	float horas=horast();
	sueldot=12*horas;
	printf("El sueldo total es %.1f dolares \n", sueldot);
	return 0;

}
	

				
	
	


