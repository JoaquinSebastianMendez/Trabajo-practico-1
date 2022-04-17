/*
 ============================================================================
 Name        : Menu
 Author      : Joaquin Mendez
 Dni : 43820405
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {
	setbuf(stdout, NULL);


		float km = 0;
		float z = 0;
		float y = 0;
		int opcion;
		float precioTarjetaDebitoAe=0;
		float precioTarjetaCreditoAe = 0;
		float precioBitcoinAe = 0;
		float precioUnitarioAe = 0;
		float precioTarjetaDebitoLm = 0;
		float precioTarjetaCreditoLm = 0;
		float precioBitcoinLm = 0;
		float precioUnitarioLm = 0;
		int opcion2;

		do
		{
			printf("1)Ingresar KM:");
			printf("\n2)Ingresar Precio de Vuelos: " );
			printf("\n3)Calcular todos los costos.");
			printf("\n4)Informar Resultados.");
			printf("\n5)Carga forzada de datos.");
			printf("\n6)Salir.\n");
			scanf("%d",&opcion);


			switch(opcion)
				{
				case 1:
					km = pedirNumero("Ingresar KM \n");
				break;
				case 2:
					printf("Ingresar Precio de Vuelos:\n");
					printf("1-Precio vuelo Aereolineas \n");
					printf("2-Precio vuelo LATAM \n");
					printf("Elija una Opcion: \n");
					scanf("%d",&opcion2);


					if(opcion2 == 1)
					{
						y = pedirNumero("-Precio vuelo Aereolineas \n");
						z = pedirNumero("-Precio vuelo LATAM \n");
					}
					else
					{
						z = pedirNumero("-Precio vuelo LATAM \n");
						y = pedirNumero("-Precio vuelo Aereolineas \n");
					}


					break;
				case 3:
					//precio Aereolineas
					precioTarjetaDebitoAe = CalcularTarjetaDebitoAereolineas(y);
					precioTarjetaCreditoAe = CalcularTarjetaCreditoAereolineas(y);
					precioBitcoinAe = CalcularPrecioBitcoinAereolineas(y);
					precioUnitarioAe = CalcularPrecioUnitarioAereolineas(y, km);
					//precio LATAM
					precioTarjetaDebitoLm = CalcularTarjetaDebitoLatam(z);
					precioTarjetaCreditoLm = CalcularTarjetaCreditoLatam(z);
					precioBitcoinLm = CalcularPrecioBitcoinLatam(z);
					precioUnitarioLm = CalcularPrecioUnitarioLatam(z,km);

					printf("Los costos ya se han calculado\n");
					break;

				case 4:
					if(opcion == 3 && km == 0 && y == 0 && z == 0)
					{
						printf("No se introdujo ningun valor valido para poder realizar las operaciones \n");

						printf("Saliendo del sistema \n");

						return EXIT_SUCCESS;
					}
					else
					{
						//Aereolineas
						printf("Precio Aereolineas : %.2f \n",y);
						printf("Precio con tarjeta de Debito : %.2f \n",precioTarjetaDebitoAe);
						printf("Precio con tarjeta de Credito : %.2f \n",precioTarjetaCreditoAe);
						printf("Precio pagando con Bitcoin : %f \n",precioBitcoinAe);
						printf("Precio Unitario : %.2f \n",precioUnitarioAe);
						//Latam
						printf("Precio LATAM : %.2f \n",z);
						printf("Precio con tarjeta de Debito : %.2f \n",precioTarjetaDebitoLm);
						printf("Precio con tarjeta de Credito : %.2f \n",precioTarjetaCreditoLm);
						printf("Precio pagando con Bitcoin : %f \n",precioBitcoinLm);
						printf("Precio unitario : %.2f \n",precioUnitarioLm);

					}

					break;
				 case 5:
					printf("Carga Forzada ... \n");

					km = 7090;
					y = 162965;
					z = 159339;
					//precio Aereolineas
					precioTarjetaDebitoAe = CalcularTarjetaDebitoAereolineas(y);
					precioTarjetaCreditoAe = CalcularTarjetaCreditoAereolineas(y);
					precioBitcoinAe = CalcularPrecioBitcoinAereolineas(y);
					precioUnitarioAe = CalcularPrecioUnitarioAereolineas(y, km);
					//precio LATAM
					precioTarjetaDebitoLm = CalcularTarjetaDebitoLatam(z);
					precioTarjetaCreditoLm = CalcularTarjetaCreditoLatam(z);
					precioBitcoinLm = CalcularPrecioBitcoinLatam(z);
					precioUnitarioLm = CalcularPrecioUnitarioLatam(z,km);


					printf("Precio Aereolineas : %f \n",y);
					printf("Precio con tarjeta de Debito : %f \n",precioTarjetaDebitoAe);
					printf("Precio con tarjeta de Credito : %f \n",precioTarjetaCreditoAe);
					printf("Precio pagando con Bitcoin : %f \n",precioBitcoinAe);
					printf("Precio Unitario : %f \n",precioUnitarioAe);
					//Latam
					printf("Precio LATAM : %f \n",z);
					printf("Precio con tarjeta de Debito : %f \n",precioTarjetaDebitoLm);
					printf("Precio con tarjeta de Credito : %f \n",precioTarjetaCreditoLm);
					printf("Precio pagando con Bitcoin : %f \n",precioBitcoinLm);
					printf("Precio unitario : %f \n",precioBitcoinLm);

					break;
				case 6:
					printf("Saliendo con exito \n");
					break;
				}



		}while(opcion!=6);





	return EXIT_SUCCESS;
}
