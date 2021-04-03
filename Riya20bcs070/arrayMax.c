#include <stdio.h>

void main()
{
    int sep[30];
    int i, mx, mn, n=30;
	


   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&sep[i]);
	    }
            for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {

            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
          
            max2 = arr[i];
        }
    }



    mx = sep[0];
    mn = sep[0];

    for(i=1; i<n; i++)
    {
        if(sep[i]>mx)
        {
            mx = sep[i];
        }


        if(sep[i]<mn)
        {
            mn = sep[i];
        }
    }
    printf("Maximum temperature is : %d\n", mx);
    printf("Minimum temperature is : %d\n\n", mn);
}
