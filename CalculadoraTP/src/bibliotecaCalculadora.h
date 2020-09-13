/*
 * bibliotecaCalculadora.h
 *
 *  Created on: 12 sep. 2020
 *      Author: Antonella Amichetti Quentrequeo
 */

#ifndef BIBLIOTECACALCULADORA_H_
#define BIBLIOTECACALCULADORA_H_

/**
 * Realiza la suma de dos numeros de tipo float
 * @param num1 Recibe un numero de tipo float a sumar
 * @param num2 Recibe un numero de tipo float a sumar
 * @return Retorna la suma de los dos numeros
 */
float sumar (float num1,float num2);

/**
 * Realiza la resta de dos numeros de tipo float
 * @param num1 Recibe un numero de tipo float
 * @param num2 Recibe un numero de tipo float a restar al primero
 * @return Retorna la resta de los dos numeros
 */
float restar (float num1,float num2);

/**
 * Realiza la multiplicacion de dos numeros de tipo float
 * @param num1 Recibe un numero de tipo float a multiplicar
 * @param num2 Recibe un numero de tipo float a multiplicar
 * @return Retorna el producto de los dos numeros
 */
float multiplicar (float num1,float num2);

/**
 * Identifica si el numero de tipo float es entero o contine parte decimal
 * @param num Recibe un numero de tipo float
 * @return Retorna 0 si el numero recibido es entero, devuelve -1 si es decimal
 */
int identificadorNumEntero (float numero);

/**
 * Realiza la division entre dos numeros de tipo float
 * @param num1 Recibe un dividendo de tipo float
 * @param num2 Recibe un divisor de tipo float
 * @param pResultado Recibe direccion de memoria de variable en la que escribe el cociente
 * @return Retorna 0 si la operacion fue exitosa, -1 si se ingreso 0 como divisor, -2 si hubo error
 */
int dividir (float num1, float num2, float* pResultado);

int conversorFloatInt (float numero);

/**
 * Calcula el factorial de un numero recibido
 * @param numero Recibe un dato de tipo float del que calcula el factorial
 * @param pFactorial Recibe direccion de memoria donde escribe el resultado obtenido
 * @return Retorna 0 si la operacion fue exitosa, -1 si se ingreso un numero negativo, -2 si se ingreso un numero decimal, -3 en caso de error
 */
int factorial (float numero,long int* pFactorial);

#endif /* BIBLIOTECACALCULADORA_H_ */
