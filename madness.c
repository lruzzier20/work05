#include <stdio.h>
int main(){
  char a=0;
  int b=0;
  long c=0;
  printf("a(hex): %p\t a(decimal): %lu\n", &a, &a);
  printf("b(hex): %p\t b(decimal): %lu\n", &b, &b);
  printf("c(hex): %p\t c(decimal): %lu\n", &c, &c);
  char* ap=&a;
  int* bp=&b;
  long* cp=&c;
  printf("ap=%p\n",ap);
  printf("bp=%p\n",bp);
  printf("cp=%p\n",cp);
  *ap=100;
  *bp=101;
  *cp=102;
  printf("a(new)=%d\t b(new)=%d\t c(new)=%d\t\n",a,b,c);
  unsigned int d=23;
  int* dpi=&d;
  char* dpc=&d;
  printf("dpi=%p\t dpi points to:%d\n",dpi,*dpi);
  printf("dpc=%p\t dpc points to:%d\n",dpc,*dpc);
}
