#include <stdio.h>
int main(){
// Converção explicita:

int a =10;
int b = 3;
float quociente = (float) a / b; // 'a' é explicitamente convertido para float

printf("Quociente: %2.f\n", quociente);

return 0;

}
