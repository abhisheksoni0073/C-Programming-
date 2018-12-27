#include <stdio.h>

main() {

   FILE *fp;
   char name[255];

   fp = fopen("file.txt", "r");
    
   fgets(name, 255, (FILE*)fp);
   printf("A: %s\n", name );
   fclose(fp);

}
