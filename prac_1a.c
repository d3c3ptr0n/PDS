#include<stdio.h>

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void insertElement(int arr[], int n, int index, int element)
{
    for(int i = n - 1; i > index; i--)
        arr[i] = arr[i-1];
    arr[index] = element;
}

void deleteElement(int arr[], int n, int index) 
{
    for(int i = index; i < n; i++)
        arr[i] = arr[i+1]; 
}

int main()
{
    // Taking array input
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int size = n + 1;
    int arr[size];
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Insert element operation 
    printf("\n");
    int insert_index, insert_element;
    printf("Enter the index where the element is to inserted: ");
    scanf("%d", &insert_index);
    printf("Enter the element: ");
    scanf("%d", &insert_element);
    insertElement(arr, size, insert_index, insert_element);
    printf("The new array is: ");
    display(arr, size);
    
    // Delete element operation
    printf("\n\n");
    int delete_index;
    printf("Enter the index to be deleted: ");
    scanf("%d", &delete_index);
    deleteElement(arr, n, delete_index);
    printf("The new array is: ");
    display(arr, n);

    // Update element operation
    printf("\n\n");
    int update_index, update_element;
    printf("Enter the index of the element you want to update: ");
    scanf("%d", &update_index);
    printf("\n");
    printf("Enter the value to be updated: ");
    scanf("%d", &update_element);
    arr[update_index] = update_element;
    display(arr, n);
    
    return 0;
}