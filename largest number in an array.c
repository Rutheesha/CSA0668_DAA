#include<stdio.h>
int main()
{
int size, i, largest;
printf("\n Enter the size of the array: ");
scanf("%d", &size);
int array[size];
printf("\n Enter %d elements of the array: \n", size);
for (i = 0; i < size; i++)
{
scanf(" %d", &array[i]);
}
largest = array[0];
for (i = 1; i < size; i++)
{
if (largest < array[i])
largest = array[i];
}
printf("\nlargest element present in the given array is : %d", largest);
return 0;
}
Footer
© 2023 GitHub, Inc.
