#include <stdio.h>
#include <stdlib.h>

int main(){

    //mendeklarasikan yang ada dalam file
    FILE * file; 

    char ch; //variabel untuk huruf
    int kata; //untuk menampung jumlah kata

    //membuka file data yang telah terisi kata
    file = fopen("data.txt", "r");

    //untuk menghitung kata dalam file
    kata = 0;
    //selama huruf tidak sama dengan EOF (end of file) maka dia akan terus looping
    while ((ch = fgetc(file)) != EOF){

        // Check huruf bukan spasi 
        if (ch == '\0' || ch == '\n' || ch == '\t' || ch == ' '){
            kata++; //maka kata akan bertambah 1
	}
    }
        
    printf("\n");
    //menampilkan total kata dalam file
    printf("Total kata: %d\n", kata);
 


   //close file
    fclose(file);

    return 0;
}
