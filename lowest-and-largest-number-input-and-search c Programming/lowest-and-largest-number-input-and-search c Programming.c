#include<stdio.h>
int main(){
    int a[100],i,n,large,small;
    printf("\n Enter The number of element : ");
    scanf("%d",&n);
    printf("\n Input The Array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    
    for(i=1;i<n;i++){
        if(a[i]>large){
            large = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
    }
    printf("\n The Smallest Elements is %d\n",small);
    printf("\n The Largest Elements is %d\n",large);
}

