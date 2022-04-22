// program that will ask user for input and will display its output in normal and reversed order using functions
#include<stdio.h>
// function to store the inputs of user in array
void arrAsk(int nums[10], int n)
{
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
}
// function to display the output in normal order
void dispArr(int nums[10], int x)
{
    printf("Normal Output: \n");
    for(int i=0; i<x; i++)
        printf("%d ", nums[i]);
}
//  function to display the output in reversed order
void revArr(int nums[10], int ali)
{
    printf("\nReversed Output: \n");
    for(int i=ali-1; i>=0; i--)
        printf("%d ", nums[i]);
}
//main fucntion
int main()
{
    //declation of variables
    int nums[50], size;
    
    //asking input from user
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter the %d numbers: ", size);
    
    // calling the functions
    arrAsk(nums, size);
    dispArr(nums, size);
    revArr(nums, size);
    
    return 0;
}
