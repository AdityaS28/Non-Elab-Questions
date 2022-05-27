#include <stdio.h>
int main()
{   int n,i,a=0,b=0;
    scanf("%d",&n); 
    int arr[n]; 
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]>a){
            b=a;
            a=arr[i];
        }
    } 
printf("%d %d",a,b);

return 0;
}