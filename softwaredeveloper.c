#include <stdio.h>

// function to sort the array in ascending order
void Array_sort(int *array , int n)
{
    // declare some local variables
    int i=0 , j=0 , temp=0;

   for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

    printf("\ndata setelah diurutkan...");
     for(i=0 ; i<n ; i++)
    {
        printf("\nbilangan ke-%d : %d",i+1,array[i]);
    }

}

// function to calculate the median of the array
float Find_median(int array[] , int n)
{
    float median=0;

    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];

    return median;
}

double findMean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return (double)sum / (double)n;
}

int multiply(int array[], int n)
{
    int kali = 1;
    for (int i = 0; i < n; i++)
        kali = kali * array[i];
    return kali;
}

int main()
{
    // declare two int arrays
    int array_1[30] = {0};
    // declare some local variables
    int i=0 ,n=0;
    float median=0;
    double mean=0;
    int kali=0;

    printf("\nMasukkan jumlah Data   : ");
    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {
        printf("masukkan bilangan ke-%d : ",i+1);
        scanf("%d",&array_1[i]);
    }

    // Sort the array in ascending order
    Array_sort(array_1 , n);

    // Now pass the sorted array to calculate
    median = Find_median(array_1 , n);
    mean   = findMean(array_1, n);
    kali   = multiply(array_1,n);

    printf("\nmedian        : %.1f",median);
    printf("\nmean          : %.1f",mean);
    printf("\nmultiplication: %d\n",kali);
    return 0;
}
