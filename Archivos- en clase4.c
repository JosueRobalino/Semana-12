#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *Archivo;

struct datosPersona{
   char nombre[20];
   char apellido[20];
   char email[30];
}datos;
int main(void) {
   char addressFile[]="prueba1.txt";
  int rpt=0;
  Archivo=fopen(addressFile,"a");

  if(Archivo==NULL){
    printf("El archivo no existe\n");
    return 1;
  }
  printf("\t - Agregrando un contacto de clientes - \n");

  do{
    fflush(stdin);
    printf("Nombre: ");gets(datos.nombre);
    printf("Apellido: ");gets(datos.apellido);
    printf("Email: ");gets(datos.email);
    //escritura del archivo
   fprintf(Archivo, "\n\nNombre:");
    fwrite(datos.nombre,1,strlen(datos.nombre),Archivo);
    fprintf(Archivo, "\n\nApellido:");
    fwrite(datos.nombre,1,strlen(datos.apellido),Archivo);
    fprintf(Archivo, "\n\nEmail:");
    fwrite(datos.nombre,1,strlen(datos.email),Archivo);
    //continuar con pregunta
    printf("Desar aagregar mas contactos (1 - SI || 0 - NO):");
    scanf("%d",&rpt);
  }while(rpt!=0);
  fclose(Archivo);
  return 0;
}