#include<stdio.h>

int main(){
    //variables
    int anio=0;
    //mostrar un mensaje en pantalla
    printf("ingresar el año: ");
    //obtener el valor ingreado
    scanf("%d",&anio);
    //condico if, if else
    if(anio % 4==0){
        if(anio %100==0){
            if(anio % 400==0){
                printf("El año %d es bisiesto",anio);
            }else{
                printf("El año %d no es bisiesto",anio);
            }      
        } else{
            printf("El año %d es bisiesto",anio);
        }
    } else{
        printf("El año %d no es bisiesto",anio);
    }
return 0;
}

