#include<stdio.h>
 int main(){
     float marks;
     printf("enter the percentage : ");
     scanf("%f",&marks);
     if(marks>=70){
     printf("DISTINCTION\n");}
     else if(marks>=60 && marks<70){
     printf("FIRST CLASS\n");}
     else if(marks>=40 && marks<60){
     printf("SECOND CLASS");}
     else{
     printf("FAIL");}
     return 0;
     }