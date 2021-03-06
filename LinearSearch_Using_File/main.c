// LINEAR SEARCH OPERATION USING INPUTS FROM A FILE AND SHOWING OUTPUTS IN ANOTHER FILE
// LANGUAGE USED : C

#include<stdio.h>

int main()
{
    int n,i;
    int search, x = 0;
    FILE *fptr,*optr;
    
    fptr = fopen("input_file.txt", "r");
    optr = fopen("output_file.txt","w");

    fscanf(fptr,"%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
    {
        fscanf(fptr,"%d", &arr[i]);
    }

    fscanf(fptr,"%d", &search);
    
    for(i = 0; i < n; i++)
    {
        if(search == arr[i])
        {
            fprintf(optr, "Number found at %d\n", i);
            x++;
        }
    }
    if(x == 0)
    {
        fprintf(optr, "No Number Found!");
    }

    fclose(fptr);
    fclose(optr);
    
    return 0;
}
