# include<stdio.h> 

int main(){
     int tc,n1,n2,n3;
     scanf("%d",&tc);
     for(int i=1;i<=tc;i++)
     {
        scanf("%d%d%d",&n1,&n2,&n3);
        if((n1>n2 && n1<n3) || (n1>n3 && n1<n2))
        {
            printf("Case %d: %d\n",i,n1);
        }
        else if((n2>n1 && n2<n3) || (n2>n3 && n2<n1))
        {
            printf("Case %d: %d\n",i,n2);
        }
        else 
            printf("Case %d: %d\n",i,n3);
     }
     return 0;
}
// #include<stdio.h>
 
// int main(){
//     static unsigned i, n, a, b, c;
//     scanf("%u", &n);
 
//     for(i = 1; i <= n; ++i){
//         scanf("%u%u%u",&a,&b,&c);
 
//         if(a > b && a > c)
//             printf("Case %u: %u\n", i, b > c ? b : c);
//         else if(b > c)
//             printf("Case %u: %u\n", i, c > a ? c : a);
//         else
//             printf("Case %u: %u\n", i, a > b ? a : b);
//     }
//     return 0;
// }