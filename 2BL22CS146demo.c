#inlude<stdio.h>
int main(){
int n;
printf("Ente the number : );
scanf("%d",&n);
int i=0;j=1;
for(int o=2;o<=n;o++){
int k=i+j;
i=j;
j=k;
}
printf("the nth term is: %d",i);
return 0;
}
