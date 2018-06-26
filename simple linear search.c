#include<stdio.h>

#define MAX_SIZE 5

int main()
{
    int arr_search[MAX_SIZE], i, element;

    printf("Simple linear search example - Array with C programming language \n");

    printf("\n Enter %d Elements for searching : \n", MAX_SIZE);
    for(i=0; i<MAX_SIZE; i++)
        scanf("%d", &arr_search[i]);

    printf("Enter element to search : ");
    scanf("%d",&element);

    for(i=0; i<MAX_SIZE; i++)
    {
        if(arr_search[i] == element)
        {
            printf("Linear search : %d found at array : %d \n", element, i+1);
            break;
        }
    }
    if(i==MAX_SIZE)
        printf("\n Search Eelement : %d : Not found \n", element);

    return 0;
}
