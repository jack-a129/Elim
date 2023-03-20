#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

extern char cln[6];

void fizzbuzz(){
    int ber;
    char check[8];
    char check2[10];
    char num2[5];
    int i=0;
    time_t st = time(NULL);
    time_t e;
    char i3[5];
    int t;
    system("cls");//ここ変えて
    while (1)
    {
        i += 1;
        srand((unsigned int)time(NULL));
        ber = 1+rand()%100;        
        printf("%d\n>",ber);
        scanf("%s",check);
        if(ber%15 == 0){
            strcpy(check2,"fizzbuzz");
        }else if(ber%5 == 0){
            strcpy(check2,"buzz");
        }else if(ber%3 == 0){
            strcpy(check2,"fizz");
        }else{
            sprintf(num2, "%d", ber);
            strcpy(check2,num2);
        }
        if(strcmp(check,check2) != 0){
            e = time(NULL);
            t = e - st;
            printf("\033[31m");
            printf("\033[1A");
            printf(">%s",check);
            printf("\033[0m");         
            printf("\nMISS");
            printf("\nYour Score:");
            printf("%d",i);
            printf("\nYour Time:");
            printf("%d",t);
            printf("\ndo you want to continue?(y/n)\n");
            scanf("%s",i3);
            if(strcmp(i3,"y")==0){
                i=0;
                system("cls");//ここ変えて
                continue;
            }else{
                break;
            }
        }

    }
    system("cls");//ここ変えて
    exit(0);   
}