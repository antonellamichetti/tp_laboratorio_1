/*
 * bibliotecaCalculadora.c
 *
 *  Created on: 12 sep. 2020
 *      Author: Antonella Amichetti Quentrequeo
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float sumar (float num1,float num2){
	float resultado;
	resultado = num1+num2;
	return resultado;
}

float restar (float num1,float num2){
	float resultado;
	resultado = num1-num2;
	return resultado;
}

float multiplicar (float num1,float num2){
	float resultado;
	resultado = num1*num2;
	return resultado;
}

int identificadorNumEntero (float numero){
	float numRedondeadoAbajo;
	int retorno;
	retorno = -1;
	numRedondeadoAbajo = floor(numero);
		if (numero-numRedondeadoAbajo==0){
			retorno = 0;
		}
		else {
			retorno = -1;
		}
	return retorno;
}

int dividir (float num1, float num2, float* pResultado) {
	float resultado;
	int retorno;
	retorno =-2;

	if (num2 !=0) {
		resultado = num1/num2;
		(*pResultado)=resultado;
		retorno =0;
	}
	else if (num2 ==0) {
		retorno =-1;
	}
	else {
		retorno =-2;
	}
	return retorno;
}

int conversorFloatInt (float numero){
	int numeroInt;
	numeroInt=(int)numero;
	return numeroInt;
}

int factorial (float numero,long int* pFactorial) {
	long int factorial=1;
	int numeroEntero;
	int retorno;
	retorno=-3;
	int i;

	if (numero < 0){
			retorno=-1;
		}
	else if (identificadorNumEntero(numero)==0) {
		numeroEntero=(int)numero;
		for (i=1;i<=numeroEntero;i++) {
				factorial =factorial*i;
			}
		(*pFactorial)=factorial;
		retorno=0;
	}
	else if (identificadorNumEntero(numero)==-1){
		retorno=-2;
	}
	else {
		retorno=-3;
	}
	return retorno;
}

