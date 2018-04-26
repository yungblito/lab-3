#include <stdio.h>
//con la ayuda de un void se grafica la graduacion del termometro de 0 a 50 gardos celcuis 
//se inicia el algoritmo
//se pide al usuario ingresar la temperatura en grados celcius
//se llama a la grafica del termometro
//el grafico indica la temperatura que el usario ingreso mediante un *
//fin del algoritmo 


void graficatermometro(){
	int lt;
	for (lt=0;lt<=50;lt=lt+10){
		if (lt==0){
			printf("%d\t  ",lt);
		}
		else if (lt==10){
			printf("%d\t    ",lt);
			
		}
		else if (lt==20){
			printf("%d\t      ",lt);
			
		}
		else if (lt==30){
			printf("%d\t",lt);
			
		}
		else if (lt==40){
			printf("%d\t  ",lt);
			
		}
		else if (lt==50){
			printf("%d\t ",lt);
			
		}
	}
	printf("\n|\t  |\t    |\t      |\t        |\t  |\n");	

	
	
}

	
int main (){
	printf("Algoritmo representación Termometro en grados celcius\n");
	int n,t;
	printf("Ingrese la temperatura en grados celcius (entre 0 y 50):\n");
	scanf("%d",&t);
	graficatermometro();
	t=t-1;
	for (n=0;n<=t;n++){
		printf("-");
	}
	printf("*");
	return 0;
}
