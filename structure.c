#include<stdio.h>
// creating an structure of student 
struct Student{
char name[10];
int roll; 
};
int main(){
   struct Student s1, s2 ; // declaration of variables
scanf("%s", &s1.name) ; 
s2.roll = 4;        
printf("%s\n",s1.name); // Accessing the values
printf("%d",s2.roll);
}