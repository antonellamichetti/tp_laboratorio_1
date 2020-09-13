/*
 ============================================================================
 Name        : CalculadoraTP.c
 Author      : Antonella Amichetti Quentrequeo
 Version     :
 Copyright   : Your copyright notice
 Description : Calculadora - 1ro E
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bibliotecaCalculadora.h"

int main(void) {
	setbuf(stdout,NULL);
	int opcion;
	float valor1;
	float valor2;
	float totalSuma;
	float totalResta;
	float totalDivision;
	float totalMultiplicacion;
	long int pFactorial1;
	long int pFactorial2;
	int banderaOpcion1=0;
	int banderaOpcion2=0;
	int banderaOpcion3=0;


	do
	  {
		        system("CLS");
		        printf("Menu de Opciones\n");
		        printf("1-Ingresar 1er operando (A=x)\n");
		        printf("2-Ingresar 2do operando (B=y)\n");
		        printf("3-Calcular todas las operaciones \n");
		        printf("-a) Calcular la suma (A+B)- \n");
		        printf("-b) Calcular la resta (A-B)- \n");
		        printf("-c) Calcular la division (A-B)- \n");
		        printf("-d) Calcular la multiplicacion (A*B)- \n");
		        printf("-e) Calcular el factorial (A! B!)- \n");
		        printf("4-Informar resultados \n");
		        printf("5-Salir \n");
		        printf("Ingrese Opcion -1 a 5-: \n");
		        fflush(stdin);
		        scanf("%d", &opcion);

		switch(opcion)
		{
	      case 1:
	    	  printf("Ingrese un numero: \n");
	    	  scanf("%f",&valor1);
	    	  banderaOpcion1=1;
	    	  break;
	      case 2:
	    	  if(banderaOpcion1==1){
	    		  printf("Ingrese otro numero: \n");
	    		  scanf("%f",&valor2);
	                 banderaOpcion2=1;
	            }
	    	  else{
	                printf("\nError. Debe ingresar 1er operando antes\n");
	            }
	            break;
	        case 3:
	           if(banderaOpcion1==1 && banderaOpcion2==1){
	        	   printf("\nSe estan realizando los calculos...\n");
	        	   totalSuma=sumar (valor1,valor2);
	        	   totalResta=restar (valor1,valor2);
	        	  dividir(valor1,valor2,&totalDivision);
	        	  totalMultiplicacion = multiplicar (valor1,valor2);
	        	  factorial (valor1,&pFactorial1);
	        	  factorial (valor2,&pFactorial2);
	               banderaOpcion3=1;
	               system("PAUSE");
	            }

	           else{
	                printf("\nError. Debe ingresar 1er y 2do operando antes\n");
	                system("PAUSE");
	            }
	            break;
	        case 4:
	        	if (banderaOpcion3==1) {
	        		printf("\na)El resultado de %.2f + %.2f es: %.2f",valor1,valor2,totalSuma);
	        		printf("\nb)El resultado de %.2f - %.2f es: %.2f",valor1,valor2,totalResta);
	        		if (dividir(valor1,valor2,&totalDivision)==0){
	        			printf("\nc)El resultado de %.2f / %.2f es: %f",valor1,valor2,totalDivision);
	        			 }
	        		else if (dividir(valor1,valor2,&totalDivision)==-1) {
	        			printf("\nc)No es posible dividir por 0");
	        			   }
	        		printf("\nd)El resultado de %.2f * %.2f es: %.4f",valor1,valor2,totalMultiplicacion);
	        		if (factorial (valor1,&pFactorial1)==0){
	        			printf("\nd)El factorial de %.2f es:  %ld",valor1,pFactorial1);
	        			   }
	        		else if (factorial (valor1,&pFactorial1)==-1) {
	        			printf("\nd)Factorial de %.2f :Error, no es posible sacar factorial de numero negativo",valor1);
	        			    }
	        		else if (factorial (valor1,&pFactorial1)==-2) {
	        			printf("\nd)Factorial de %.2f :Error, no es posible sacar factorial de numero decimal",valor1);
	        			     }
	        		else {
	        			printf("\nd)Factorial de %.2f :Error al calcular factorial",valor1);
	        			  }
	        		if (factorial (valor2,&pFactorial2)==0){
	        			printf("\nd)El factorial de %.2f es:  %ld \n",valor2,pFactorial2);
	        			   }
	        		 else if (factorial (valor2,&pFactorial2)==-1) {
	        			printf("\nd)Factorial de %.2f :Error, no es posible sacar factorial de numero negativo\n",valor2);
	        			    }
	        		else if (factorial (valor2,&pFactorial2)==-2) {
	        			printf("\nd)Factorial de %.2f :Error, no es posible sacar factorial de numero decimal\n",valor2);
	        			     }
	        		else {
	        			 printf("\nd)Factorial de %.2f :Error al calcular factorial\n",valor2);
	        			  }

	        	banderaOpcion1=0;
	        	banderaOpcion2=0;
	        	banderaOpcion3=0;
	        	system("PAUSE");
	        	}
	        	else{
	        printf("\nError. Debe calcular las operaciones antes de seleccionar esta opcion\n");
	        	}
	        	system("PAUSE");
	            break;
	        case 5:
	       	printf("\nEsta seguro que desea salir? Si esta seguro, presione 5 \n");
	       	fflush(stdin);
	        scanf("%d", &opcion);
	       	banderaOpcion1=0;
	        banderaOpcion2=0;
	       	break;
	        default:
	            printf("Opcion invalida \n");
	            system("PAUSE");
	            break;
	        }

	    }
	    while(!(opcion==5));

	return EXIT_SUCCESS;
}
