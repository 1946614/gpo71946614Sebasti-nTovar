/******************************************************************************
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numvideojuego, opcion;
    float precio_unitario, total, iv;
    string videojuego, descripcion, categoria;

    cout << "\t ***PLANET GAMERS*** \n";
    cout << " 1.-Agregar Videojuego \n 2.-Modificar Videojuego\n 3.-Eliminar Videojuego\n 4.-Lista Videojuego\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Videojuego
        cout << "Ingrese el numero de videojuego\n";
        cin >> numvideojuego;
        cout << "ingrese el nombre del videojuego\n";
        cin.ignore();//me ignora el primer espacio 
        getline(cin, videojuego); //permite ejecutar los espacios en la variable
        cout << "ingrese el descripcion del videojuego\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese la categoria del videojuego\n";
        cin.ignore();
        getline(cin, categoria);
        cout << "ingrese el precio unitario del videojuego\n";
        cin >> precio_unitario;
        precio_unitario*0.16= iv;
        precio_unitario+iv=total;
        cout << "su total es\n";
        cin >> total;
        return main();
        break;

    case 2: //Modificar Videojuego
        break;

    case 3://Eliminar Videojuego
        break;

    case 4: //Lista de Videojuego
        break;

    case 5: //Limpiar Pantalla
        system("clear"); 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por visitar PLANET GAMERS \n";
        break;

    default:
        cout << "ingrese opcion correcta \n";
        return main();

    }
{
	lista de articulos[3];
	int opcion, busqueda;

	do
	{
int vid;
			printf("1.- num OC \n 2.-Listas Vigentes");
			scanf_s("%d", &vid);
			if (vid == 1)
			{
				printf("ingrese el num oc");
				scanf_s("%d", &busqueda);

				
				for (int i = 0; i < 3; i++)
				{
					if (busqueda == compras[i].numoc)
					{
						printf("VIDEOJUEGO: %d \n", compras[i].idvideojuego);
						printf("num OC: %d \n", compras[i].numoc);
						
						printf("bodega %s", compras[i].bodega.c_str());
						printf("subtotal: %f \n", compras[i].subtotal);
						printf("iva: %f \n", compras[i].iva);
						printf("total: %f \n", compras[i].total);
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					if (compras[i].numoc !=0)
					{
						printf("ID VIDEOJUEGO: %d \n", compras[i].idvideojuego);
						printf("num OC: %d \n", compras[i].numoc);
						printf("bodega %s", compras[i].bodega.c_str());
						printf("subtotal: %f \n", compras[i].subtotal);
						printf("iva: %f \n", compras[i].iva);
						printf("total: %f \n", compras[i].total);
					}
				}
			}