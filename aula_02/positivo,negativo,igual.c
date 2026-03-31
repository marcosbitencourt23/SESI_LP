/*Sistema de Login Simples
Leia usuário e senha:
Usuário correto: admin
Senha correta: 1234
Informe se o login foi bem-sucedido ou não*/

    #include <stdio.h>
    int main(){
        int numero;
        
        printf("Digite um numero");
        scanf("%i", &numero);
        
        if(numero>0){
            printf("n e positivo");
        } else if (numero==0){
            printf("numero e igual a zero");
        } else {
            printf("numero negativo");
        }
    }