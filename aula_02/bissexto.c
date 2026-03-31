/*6) Ano Bissexto
Leia um ano e informe se ele é bissexto ou não*/

    #include <stdio.h>
    int main(){
        int ano;
        printf("digite um ano");
        scanf("%i", &ano);
        
     if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    printf("e um ano bissexto");}
    else{
        printf("nao e um ano bissexto");
    }
    return 0;
    }
    