#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main(){
FILE *ptr;
char c;
ptr = fopen("sample2.txt","w");
// getc(ptr);
// putc("the person is ",ptr);
// printf("the value of %c\n",getc(ptr));
// printf("the value of %c\n",getc(ptr));
// printf("the value of %c\n",getc(ptr));
// printf("the value of %c\n",getc(ptr));
putc('s',ptr);
putc('o',ptr);
putc(' ',ptr);
putc('s',ptr);
putc('e',ptr);
putc('d',ptr);
putc(' ',ptr);
putc('v',ptr);
putc('r',ptr);
putc('o',ptr);
fclose(ptr);

return 0;
}