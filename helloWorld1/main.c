#include <stdio.h>
#include <stdlib.h>

double elevado(double num){
    return num * num * num;
}

int maiorMenor(int num1, int num2){
    int res;
    if(num1>num2){
        res = num1;
    }else {
        res = num2;
    }

    return res;
}

int main()
{

    int numero = 10;
    char caracteres[] = "C language";
    /*printf("Hello world! %d\n", numero);
    printf("Here comes the code %s\n", caracteres);*/

    int age = 21;
    double gpa = 21.2;

    char grade = 'B';
    char phrase[] = "olá";


    /*printf("Ola\nMundo\n");*/

    int favNum = 500;

    char letter = 'm';

    /*
    printf("That's the way %c %d\n", letter, favNum);

    printf("%f\n", 4.0/2.0);


    printf("Potencia:\n");
    printf("%f\n", pow(2,3));
    printf("%f\n", sqrt(4));
    */


    /*printf("%f\n", ceil(2.2323));  arredonda para cima */
    /*printf("%f\n", floor(2.2323));  arredonda para baixo */

    const int NUM = 9; /* constante não pode ser alterada, sugerível usar letras maiusculas para nomear */


    /*double valor;
    printf("Por favor digite seu valor para saque:\n");
    scanf("%lf", &valor);
    printf("Este foi o seu valor digitado: %f\n", valor);*/

    /*char nome[20];
    printf("Digite o seu nome:\n");
    scanf("%s", nome);
    printf("O seu nome: %s\n", nome);*/

    /* input de strings com espaço*/

    /*char nomeComp[35];
    printf("Digite o seu nome completo:\n");
    fgets(nomeComp, 35, stdin);
    printf("O seu nome completo: %s\n", nomeComp);*/

    int meusNume[] =  {2,4,6,8,10,12,14,16,18};
    /*printf("%d", meusNume[5]);*/
    int meusNumeLim[10];
    meusNumeLim[1] = 45;
    /*printf("%d", meusNumeLim[1]);*/

    sayHi("Marcos");

    printf("Elevado ao cubo: %f\n", elevado(2.5));

    printf("Maior: %d\n", maiorMenor(80,80));

    return 0;
}

void sayHi(char name[]){
    printf("Hello World!! My name is %s\n", name);
}


