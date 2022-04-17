/*
 * calculos.c
 *	Alumno : Joaquin Mendez
 *	Div : C
 *	Dni : 43820405
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

#define BITCOIN 4606954.55

float pedirNumero(char mensaje[])
{
	float numero;

	printf("%s",mensaje);
	scanf("%f",&numero);

	return numero;
}

float CalcularTarjetaDebitoAereolineas(float y)
{
	float descuento;
	float precioDescuento;

	descuento = y * 0.10;
	precioDescuento = y - descuento;

	return precioDescuento;
}

float CalcularTarjetaDebitoLatam(float z)
{
		float descuento;
		float precioDescuento;

		descuento = z * 0.10;
		precioDescuento = z - descuento;

		return precioDescuento;
}

float CalcularTarjetaCreditoAereolineas(float y)
{
	float precioAumento;


	precioAumento = y * 1.25;

	return precioAumento;
}

float CalcularTarjetaCreditoLatam(float z)
{
			float precioAumento;

			precioAumento = z*1.25;

			return precioAumento;
}

float CalcularPrecioBitcoinAereolineas(float y)
{
	float precioConBitcoin;

	precioConBitcoin = y / BITCOIN;

	return precioConBitcoin;
}

float CalcularPrecioBitcoinLatam(float z)
{
	float precioConBitcoin;

	precioConBitcoin = z  / BITCOIN;

	return precioConBitcoin;
}

float CalcularPrecioUnitarioAereolineas(float km , float y)
{
	float precioUnitario;

	precioUnitario = y / km ;

	return precioUnitario;
}

float CalcularPrecioUnitarioLatam(float km , float z)
{
	float precioUnitario;

	precioUnitario = z / km;

	return precioUnitario;
}









