#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file = fopen("file.txt", "w");
    int mass[11] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 11; i++){
        fprintf(file, "%d ", mass[i]);
    }
    fclose(file);
    return 0;
}
