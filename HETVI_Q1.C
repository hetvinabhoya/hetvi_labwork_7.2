#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k;
clrscr();
for(i=1;i<=5;i++){
   for(k=4;k>=i;k--){
     printf(" ");

   }
   for(j=i;j>=1;j--){
     printf("%d",j);

   }
     printf("\n");

}

getch();
}

/*       1
	21
       321
      4321
     54321 */