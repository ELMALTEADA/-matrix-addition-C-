// Programa para 2 matrices
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
int a, b;
printf("Por favor ingresa el no. de filas y columnas  de la matriz A\n");

scanf("%d",&a);
scanf("%d",&b);
int m1[a][b];
printf("Por favor ingresa el no. de filas y columnas de la matriz B\n");
int x, y;
scanf("%d",&x);
scanf("%d",&y);
 int m2[x][y];
 if (a==x){
 if(b==y)
 {
     int p, q;
     int c[a][b];
 for(p=0;p<a;p++)
 {
     int i,j,c,d;


 {

     printf("\nSe realizara la suma de matrices\n");
     printf("\nMatriz A \n");
     for (i=0;i<a;i++)
     {
         for(j=0;j<b;j++)
         {
             m1[i][j]=rand()%20;
             printf("m1[%d]\t",m1[i][j]);

         }
         printf("\n");
     }
     printf("\n=========================================================\n");
     printf("\nMatriz B\n ");
     for (c=0;c<x;c++)
     {
         for(d=0;d<y;d++)
         {
             m2[c][d]=rand()%10;
             printf("m2[%d]\t",m2[c][d]);

         }
         printf("\n");
     }
 }
  for(q=0;q<b;q++)
 {
     c[p][q] = a[i][j]+b[c][d];
     printf("c[%d]\t",c[p][q]);
 }
 printf("\n");
 }
 }
 }
return 0;
}
