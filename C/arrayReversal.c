#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,*brr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    brr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

/*int j=0;
for(i=num;i>=0;i--)
{
    brr[j]= arr[i];
    j++;
}*/
    
    

    for(i = num-1; i >-1; i--)
        printf("%d ", *(arr + i));
    return 0;
}
