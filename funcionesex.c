#include <stdio.h>
#include "funciones.h"
#include <string.h>

int productos;

void listaProductos (char productos [][3][40], double precio [], int indice []){
printf ("Numero\t\tNombre\t\tCategoria\t\tMarca\t\tPrecio");
for (int i = 0; 1 < 10; i++)
{
printf ("%d\t\t%s\t\t%s\t\t%s\t\t%lf\n", indice[i], productos[i][0], productos [i][1], productos [i][2], precio [i]);
}
}

void buscaxMarca(char productos[][3][40], double precio []){
char marca [40];
printf ("Ingrese la marca que desee buscar:");
scanf ("%s", &marca);
for (int i = 0; i< 10; i++)
{
if (strcmp(productos[i][2], marca)==0){
printf ("%s\t\t%s\t\t%s\t\t%lf\n", productos[i][0], productos [i][1], productos [i][2], precio [i]);
}
}
}

void buscarXCategoria (char productos [][3][40], double precio[]){
char marca [40];
printf ("Ingrese la categoria que desee buscar:");
scanf ("%s", &marca);
for (int i = 0; i< 10; i++){
if (strcmp(productos[i][1], marca)==0){
printf ("%s\t\t%s\t\t%s\t\t%lf\n", productos[i][0], productos [i][1], productos [i][2], precio [i]);
}
}
}

void buscarXPrecioMenor (char productos[][3][40], double precio []){
double marca;
printf ("Ingrese el precio maximo de los productos a buscar:");
scanf ("%lf", &marca);
for (int i = 0; i< 10; i++){
if (precio[i]<= marca){
printf ("%s\t\t%s\t\t%s\t\t%lf\n", productos[i][0], productos [i][1], productos [i][2], precio [i]);
}
}
}

void editarProducto (char productos [][3][40], double precio[], int indice []){
listarProductos (productos, precio, indice);
int numero; 
char marca [40], cat [40], nombre [40];
double pre;
printf ("Ingrese el numero del producto que desea editar:");
scanf ("%d", &numero);
for (int i = 0; i < 10; i++)
{
if (indice [i]==numero){
printf ("Ingrese el nuevo nombre del producto:");
scanf ("%s", &nombre );

printf ("Ingrese la nueva categoria del producto:");
scanf ("%s", &cat );

printf ("Ingrese la nueva marca del producto:");
scanf ("%s", &marca );

printf ("Ingrese el nuevo precio del producto:");
scanf ("%lf", &pre );

strcpy (productos [i][0], nombre);
strcpy (productos [i][1], cat);
strcpy (productos [i][3], marca);
precio [i]= pre ;

}
}
}


//gcc .\main.c .\funciones.c -o main
//.\main.exe