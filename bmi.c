#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSu índice de masa corporal es: %.2f\n", imc);

    printf(
"\nÍndice      | Condición\n\
-----------------------------\n\
<18.5       | Bajo peso\n\
18.5 a 24.9 | Normal\n\
25.0 a 29.9 | Sobrepeso\n\
>=30        | Obesidad\n");

    return 0;
}
