# include<stdio.h> 
# include<string.h> 


struct employee
{
    int code;
    float salary;
    char name[100];
};
int main(){
     struct employee nishat = { 12,100.75,"abid"};
     printf("code is :%d\n",nishat.code);
     printf("salary is :%f\n",nishat.salary);
     printf("name is :%s\n",nishat.name);
     return 0;
}