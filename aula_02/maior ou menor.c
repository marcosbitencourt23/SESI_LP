/*3) Leia dois números inteiros e informe qual é o maior ou se são iguais.
*/
    #include <stdio.h>
    
    int main (){
    int num1, num2;
    
    printf("Digite o seu primeiro numero: ");
    scanf("%i", &num1);
    
    printf("digite o seu segundo numero: ");
    scanf("%i", &num2);
    
    if(num1 > num2){
        printf("numero 1 maior que numero 2");
    } else {
      printf("numero 2 e maior que o numero 1"); }
    }
    
    