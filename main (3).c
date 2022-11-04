#include <stdio.h>
#include <locale.h>

void par_impar(int p){
    if(p % 2 ==0){
        printf("%i é par",p);
    }
    else{
        printf("%i é impar",p);
    }
}
    int main(){
        setlocale(LC_ALL, "portuguese");
        int n;
    printf("Digite um valor inteiro");
    scanf("%i",&n);
    par_impar (n);
    return 0;
    }


