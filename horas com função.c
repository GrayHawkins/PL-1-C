/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int compHoras(int hora1[], int hora2[]){
    int segundosTotal1 = (hora1[0]*3600)+(hora1[1]*60)+hora1[2];
    printf("\nfazem %d segundos desde a última vez que o relógio bateu 12 horas.", segundosTotal1);
    
    int segundosTotal2 = (hora2[0]*3600)+(hora2[1]*60)+hora2[2];
    printf("\nfazem %d segundos desde a última vez que o relógio bateu 12 horas.", segundosTotal2);
    
    int max = segundosTotal1;
    int min = segundosTotal2;
    if(segundosTotal2>segundosTotal1){
        max = segundosTotal2;
        min = segundosTotal1;
    }
    
    int diferença = max-min;
    printf("\nA diferença (em segundos) entre as duas horas inseridas é de %d segundos.",diferença);
    
}



int main()
{
    
    int hora1[3];
    int hora2[3];
    int horas;
    int minutos;
    int segundos;
    int count = 0;
    while(1){
        printf("\n\nPrimeiro horário:");
        
        printf("\nDigite as horas: ");
        scanf("%d", &horas);
        if(horas>12 || horas<0){
            printf("Valor inválido");
            continue;
        }
        hora1[0] = horas;
        
        
        printf("\nDigite os minutos: ");
        scanf("%d", &minutos);
        if(minutos>60 || minutos<0){
            printf("Valor inválido");
            continue;
        }
        hora1[1] = minutos;
        
        
        printf("\nDigite os segundos: ");
        scanf("%d", &segundos);
        if(segundos>60 || segundos<0){
            printf("Valor inválido");
            continue;
        }
        hora1[2] = segundos;
        
        
        
        
    
        printf("\n\nSegundo horário:");
        
        printf("\nDigite as horas: ");
        scanf("%d", &horas);
        if(horas>12 || horas<0){
            printf("Valor inválido");
            continue;
        }
        hora2[0] = horas;
        
        
        printf("\nDigite os minutos: ");
        scanf("%d", &minutos);
        if(minutos>60 || minutos<0){
            printf("Valor inválido");
            continue;
        }
        hora2[1] = minutos;
        
        
        printf("\nDigite os segundos: ");
        scanf("%d", &segundos);
        if(segundos>60 || segundos<0){
            printf("Valor inválido");
            continue;
        }
        hora2[2] = segundos;
        
        compHoras(hora1,hora2);
        
    }
}
