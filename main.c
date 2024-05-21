#include <stdio.h>
#define TF 32
int main()
{
    int vet1[TF], vet2[TF], vetResult[TF], i, num1, num2, carry = 0, soma = 0, j;
    
    scanf("%d %d", &num1, &num2);
    for(i = TF - 1; i >= 0; i--){
        vet1[i] = num1 % 2;
        num1 = num1 / 2;
    }
    for(i = TF - 1; i >= 0; i--){
        vet2[i] = num2 % 2;
        num2 = num2 / 2;
    }
    for(i = TF - 1; i >= 0; i--) {
        int sum = vet1[i] + vet2[i] + carry;
        vetResult[i] = sum % 2;
        carry = sum / 2;
    }
    for(j = 0, i = TF - 1; i >= 0; i--, j++) {
        soma += vetResult[i] * (1 << j);  
    }
    printf("%d", soma);
    
    return 0;
}
