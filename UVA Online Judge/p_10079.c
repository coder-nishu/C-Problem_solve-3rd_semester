# include<stdio.h> 

int main(){
      long long int n,p;
     while(scanf("%lld",&n)==1)
     {
        if(n<0)
        {
            return 0;
        }
        p=(n*(n+1)/2) + 1;
        printf("%lld\n",p);
     }
     return 0;
}