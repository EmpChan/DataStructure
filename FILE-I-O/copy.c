#include <stdio.h>


/*
filename : 복사해서 붙여넣을 파일의 이름.
pathname : 복사할 파일의 이름.
*/
void copy_file(char* filename,char* pathname){
    /*
    input answer
    */


   /*
    입력한 문자의 수, 줄 수 출력 
   */
}

int main(){
    char filename[4096];
    char pathname[4096];
    printf("Please input pathname : ");
    scanf("%s", pathname);
    printf("Please input filename : ");
    scanf("%s", filename);

    copy_file(filename, pathname);

    return 0;
}