#include<stdio.h>
   int main () {
   	int a,b,c;
   printf("Moi nhap so a: ");
   scanf("%d", &a);
   printf("Moi nhap so b: ");
   scanf("%d", &b);
   printf("Moi nhap so c: ");
   scanf("%d", &c);
   
   if (a<c && c<b) {
   	printf("c nam trong khoang tu a den b");
   }
    else {printf("c khong nam trong khoang tu a den b");
	}
	return 0;
   }
   
