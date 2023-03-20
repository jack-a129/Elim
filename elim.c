#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "fi.h"

char cln[6] = "cls";

void game(int s,bool a){
    int i=0;
    int i2;
    int t;
    int i4;
    char i3[5];
    time_t st = time(NULL);
    time_t e;
    system(cln);//ここ変えて
    while (1)
    {
        if (a){
            srand((unsigned int)time(NULL));
            s =  1+rand()%50;
            i4 =  1+rand()%50;
        }
        printf("%d",s);
        printf("x");
        if(a){
            printf("%d",i4);
        }else{
            printf("%d",i);
        }       
        printf("=");
        scanf("%d",&i2);
        if(s*i != i2){
            e = time(NULL);          
            t = e - st; 
            printf("\033[31m");
            printf("\033[1A");
            if(a){
                printf("%dx%d=%d\n",s,i4,i2);
            }else{
                printf("%dx%d=%d\n",s,i,i2);
            }
            printf("\033[0m");         
            printf("MISS");
            printf("\nYour Score:");
            printf("%d",i+1);
            printf("\nYour Time:");
            printf("%d",t);
            printf("\ndo you want to continue?(y/n)\n");
            scanf("%s",i3);
            if(strcmp(i3,"y")==0){
                i=0;
                system(cln);//ここ変えて
                continue;
            }else{
                break;
            }         
        }
        i += 1;
    }
     system(cln);//ここ変えて
     exit(0);
}

int main(int argc,char** argv){ 
        char gamemode[15];
        int c;
        bool x = false;
        if(argc == 2){
            if(strcmp(argv[1],"-ran")==0){
                x =true;
                game(0,x);
            }else if(strcmp(argv[1],"-h")==0){
              printf("Please enter which dan you would like to play\n");
              printf("If you type \"random\" instead of a number, the number of steps and the number of multiples will be automatically determined.");
              exit(0);
            }else if(strcmp(argv[1],"-v")==0){
              printf("Made in Windows server 2019\n");
              printf("Ver.2");
              exit(0);
            }else if(strcmp(argv[1],"-fi")==0){
                fizzbuzz();
            }else{
                c = atoi(argv[1]);
                if(c == 0){
                printf("command or number");
                exit(0);
                }
                game(c,x);
            }
        }
        system(cln);//ここ変えて
        printf("Elim\n\n");
        printf("                            please support me\n\n");
        printf("                            This software was written in C\n\n");
        printf("                            Ver.2\n\n");
        while (1)
        {
            printf("\ngamemode:");
            scanf("%s",gamemode); 
            if(strcmp(gamemode,"-ran")==0){
                x =true;
                game(0,x);
                break;
            }else if(strcmp(gamemode,"-q")==0){
                break;
            }else if(strcmp(gamemode,"-fi")==0){
                fizzbuzz();
            }else{           
            c = atoi(gamemode);
            if(c == 0){
                printf("command or number");
                continue;
            }
            game(c,x);
            break;
            }           
        }     
        return 0;
}