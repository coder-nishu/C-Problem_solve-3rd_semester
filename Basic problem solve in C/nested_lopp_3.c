# include<stdio.h> 

int main(){
     int row,col,s,n;
     scanf("%d",&n);
    
     for(row=1;row<=n;row++)
     {
        for ( s = 1; s <= n-row; s++)
        {
            /* code */
            printf(" ");
        }

            for(col=1;col<=2*row-1;col++)
            {
                printf("*");
            }
        
        
        printf("\n");
        
     }
     return 0;
}