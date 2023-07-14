// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
# include<stdio.h> 

int main()
{
     int c ,  n;
     scanf("%d",&n);
     for (int i = 1; i <=2*n ; i++)
     {
         if(i>n)
            {
             c=2*n-i;
            }
            else
            {
             c=i;
            }
       
        for(int j=1;j<=c;j++)
        {
            
            printf("*");
        }
        printf("\n");
        
        /* code */
     }
     
     return 0;
}