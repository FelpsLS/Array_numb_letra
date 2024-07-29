#include <stdio.h>
#include <stdlib.h>


void func_letras(int a);

int main(){
    int n;
    scanf("%d", &n);

    if(n > 26 || n <= 0){
        printf("Insercao invalida\n");
        return 0;
    }
    func_letras(n);
    return 0;
}

void func_letras(int a){
    int i;
    char letras[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for(i = 0; i < a; i++){
        printf("%c", letras[i]);
    }
}

