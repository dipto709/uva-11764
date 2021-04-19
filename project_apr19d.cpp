#include<stdio.h>
main()
{
    int n,ara[10],a,i,h,l,k;
    scanf("%d",&a);    
        while(a--){
           h=0;
            l=0;
            k=0;
            k++;
            scanf("%d",&n);
            for(i=0;i<n;i++){
                scanf("%d",&ara[i]);
            }
        for(i=0;i<n-1;i++){
                if(ara[i+1]>ara[i]){
                    h++;
                }
                 if(ara[i+1]<ara[i]){
                    l++;
                }
            }
        printf("Case %d: %d %d\n",k,h,l);
        }
    return 0 ;
    
    
        }
        
    

