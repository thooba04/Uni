#include <stdio.h>

int main() {
    int a[10],i,n,key;
    int search=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    printf("Enter the elements into array:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter the search element: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    if(key==a[i])
    {
        printf("Element found at index %d",i);
        search=1;
    }
    if(search==0){
        printf("Element not found");
    }
    return 0;
}
