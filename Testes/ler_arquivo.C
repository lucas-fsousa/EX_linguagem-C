#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
int main(void){

    FILE *file;
    file = fopen("log.txt", "r");
    if(file == NULL){
        printf("Arquivo nao localizado!");
        exit(0);
    }
    char frase[500];

    while(fgets(frase, 500, file) != NULL){
        printf("%s", frase);

    }
    fclose(file);

    return 0;
}
