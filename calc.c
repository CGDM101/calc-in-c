#include <stdio.h>

float add(float, float);
float sub(float, float);
float mult(float, float);
float div(float, float);

int main()
{
    float tal1;
    float tal2;
    printf("Jag lar mig C genom att gora en kalkylator.\n");
    printf("Skriv in tal1:\n");
    scanf("%f", &tal1);
    printf("Skriv in tal2:\n");
    scanf("%f", &tal2);

    int sum = add(tal1, tal2);
    int diff = sub(tal1, tal2);
    int prod = mult(tal1, tal2);
    float quot = div(tal1, tal2);
    printf("Summan: %d\n", sum);
    printf("Differensen: %d\n", diff);
    printf("Produkten: %d\n", prod);
    printf("Kvoten: %.2f\n", quot);
    
    return 0;
}

float add(float x, float y) {
  return x + y;
}

float sub(float x, float y) {
  return x - y;
}

float mult(float x, float y) {
  return x * y;
}

float div(float x, float y) {
  return x / y;
}

