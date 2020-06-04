#include<stdio.h>
#include<math.h>
#include<string.h>
int main(void){
char cq[]="quart";
char cc[]="circo";
char cv[]="veka";
char cl[]="leva";
char str[100];
char str2[100];
printf("TIME CONVERTER\n");


int num=1;
while(num!=0){
printf("\n");
printf("how many (Enter 0 to exit) ? ");
scanf("%d",&num);
if(num==0){
break;}	
	
printf("choose one from: quart,circo,veka,leva: ");
scanf("%s",str);
printf("what do you want to convert:quart,circo,veka,leva: " );
scanf("%s",str2);

double x;
if((strcmp(str,cq)==0)&&(strcmp(str2,cl)==0)){
x=(double)num/768;
printf("%d quarts = %.3f leva\n",num,x );
}

if((strcmp(str,cq)==0)&&(strcmp(str2,cc)==0)){
x=(double)num/12;
printf("%d quarts = %.3f circo\n",num,x );
}

if((strcmp(str,cq)==0)&&(strcmp(str2,cv)==0)){
x=(double)num/48;
printf("%d quarts = %.3f veka\n",num,x );
}

if((strcmp(str,cc)==0)&&(strcmp(str2,cl)==0)){
x=(double)num/64;
printf("%d circos = %.3f levas\n",num,x );
}
if((strcmp(str,cc)==0)&&(strcmp(str2,cq)==0)){
x=num*12;
printf("%d circos = %.3f quarts\n",num,x );
}
if((strcmp(str,cc)==0)&&(strcmp(str2,cv)==0)){
x=(double)num/4;
printf("%d circos = %.3f vekas\n",num,x );
}
if((strcmp(str,cv)==0)&&(strcmp(str2,cl)==0)){
x=(double)num/16;
printf("%d vekas = %.3f levas\n",num,x );
}

if((strcmp(str,cv)==0)&&(strcmp(str2,cc)==0)){
x=num*4;
printf("%d vekas = %.3f circos\n",num,x );
}
if((strcmp(str,cv)==0)&&(strcmp(str2,cq)==0)){
x=num*48;
printf("%d vekas = %.3f quarts\n",num,x );
}
if((strcmp(str,cl)==0)&&(strcmp(str2,cc)==0)){
x=num*64;
printf("%d levas = %.3f circos\n",num,x );
}
if((strcmp(str,cl)==0)&&(strcmp(str2,cq)==0)){
x=num*768;
printf("%d levas = %.3f quarts\n",num,x );
}
if((strcmp(str,cl)==0)&&(strcmp(str2,cv)==0)){
x=num*16;
printf("%d levas = %.3f vekas\n",num,x );
}

}

}
