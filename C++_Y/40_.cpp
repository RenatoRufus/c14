#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int num1=1, num2=2, num3=3;
    char nome[10]="bruno";
    /*
    nome[0] ='B';
    nome[0] ='r';
    nome[0] ='u';
    nome[0] ='\0';
    */

    scanf("%d,&num1");


    printf("Hello printf\nCurso c++");
    //printf("\0"); \0não funcionou

    printf("Valor da variavel num:1 %d %d %d", num1,num2,num3);
    printf("Valor da variavel:  %d \n Nome: %s\n", num1, nome);




    return 0;
}

/*
d,i => int
x,X => Hexadecimal
u => int sem sinal
s => string, char
f => double
p => ponteiros

*/