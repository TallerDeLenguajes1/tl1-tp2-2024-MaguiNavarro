#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct compu {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
}Compu;

//Funciones 
void mostrar(Compu *punt);
void pcVieja(Compu *punt);
void pcRapida(Compu *punt);

void main(){
    srand(time(NULL));

   Compu cp[5]; 
   Compu *punt= cp;  //puntero al arreglo de 5 
   char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

   for (int i = 0; i < 5; i++)
   {
      cp[i].velocidad= 1+ rand()% 3;
      cp[i].cantidad= 1+ rand()% 9;
      cp[i].anio= 2015 + rand()% (2023 - 2015 + 1);
      cp[i].tipo_cpu= tipos[rand() % 6];
     
   }
  

   mostrar(punt);
  pcVieja(punt);
  pcRapida(punt);

  free(punt);
   
}

void mostrar(Compu *punt){
    for (int i = 0; i < 5; i++)
    {
         
    printf("Velocidad: %d, Cantidad Nucleos: %d, anios: %d, Tipo cpu: %s \n ", punt->velocidad, punt->cantidad,punt->anio,punt->tipo_cpu);
     punt++;

     }
}

void pcVieja(Compu *punt){
    int vieja= 4000;
    for (int i = 0; i < 5; i++)
    {
        if (punt->anio <= vieja)
        {
            vieja = punt->anio;
          
        }
       
    }

     //mostrar la mas vieja
     printf("La pc mas vieja es: \n");
     printf("Velocidad: %d, Cantidad Nucleos: %d, anios: %d, Tipo cpu: %s \n ", punt->velocidad, punt->cantidad,punt->anio,punt->tipo_cpu);
    
     
}

void pcRapida(Compu *punt){
    int velocidad = 0;
    Compu *masRapida;
    for (int i = 0; i < 5; i++)
    {
        if (punt->velocidad >= velocidad)
        {
            velocidad= punt->velocidad;
            masRapida= punt;
        }
        punt++;
    }
    printf("La velocidad mas rapida: \n");
      printf("Velocidad: %d, Cantidad Nucleos: %d, anios: %d, Tipo cpu: %s \n ", masRapida->velocidad, masRapida->cantidad,masRapida->anio,masRapida->tipo_cpu);
}
