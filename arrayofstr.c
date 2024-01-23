#include<stdio.h>

struct Student{
char name[10];
int roll; 
};
int main(){

struct Student s[5] ; // declaration of variables of array

for(int i=0;i<5;i++){
printf("enter the name\n");
gets(s[i].name) ;    

   }

for(int i=0;i<5;i++){
printf("enter the roll\n");
scanf("%d",&s[i].roll); 
}

for(int i=0; i<5;i++){
 printf("names=%s\t",s[i].name);
printf("roll num=%d\t",s[i].roll);
}
}