#include <stdio.h>

int main() {
    
    float N1_A1, N2_A1, N3_A1, N1_A2, N2_A2, N3_A2;
    float M_A1, M_A2;

    
    printf("primeira nota do aluno 1: ");
    scanf("%f", &N1_A1); 
    printf("segunda nota do aluno 1: ");
    scanf("%f", &N2_A1);
    printf("terceira nota do aluno 1: ");
    scanf("%f", &N3_A1);

    printf("primeira nota do aluno 2: ");
    scanf("%f", &N1_A2);
    printf("segunda nota do aluno 2: ");
    scanf("%f", &N2_A2);
    printf("terceira nota do aluno 2: ");
    scanf("%f", &N3_A2);

    M_A1 = (N1_A1 + N2_A1 + N3_A1) / 3.0;
    M_A2 = (N1_A2 + N2_A2 + N3_A2) / 3.0;
    
    printf("\nMedia aluno 1: %.2f\n", M_A1);
    printf("Media aluno 2: %.2f\n", M_A2);

    return 0;
}