#include<stdio.h>
int main (){

int auxiliar,i,a,b;
int n=5, x[n];

     for (i=0; i<n; i++){
     printf("dame el num%dn",i+1);
     scanf("%d",&x);
}
     for (i=0;i<n;i++){

     for (a=0;a<n-i;a++){

  if (x[a]>=x[a+1]){

auxiliar=x[a];
x[a]=x[a+1];
x[a+1]=auxiliar;
}

}

}
for (b=0;b<n;b++)
{
printf(" %d",x[b]);
}



return 0;
}
