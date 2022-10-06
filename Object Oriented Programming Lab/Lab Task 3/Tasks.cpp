#include <cstring>

int split(int a[],int size,int index)
{
	int x = 0;
	int y = 0;
	int z = 0;

	        if(a[0] > a[1])
	        {
	        	x = a[0];
	        	y = a[1];
	        }
	        if(a[0] > a[1])
	        {
	        	 x = a[1];
	        	 y = a[0];
	        }
	        for(int i = 0; i < size; i++)
	        {
	        	if(x <  a[i])
	        	{
	        		y = x;
	        		x = a[i];
	        	}
	        	else if (a[i] > y && a[i] != x)
			{
	        		y = a[i];
			}
	        }
	        for (int i = 0; i < size; i++)
	        {
	        	if ( a[i] == x)
	        	{
	        		z++;
	        	}
	        }
	        int v[size + z] = {0};
	        
	        for (int i = 0, j = 0; j < (size + z); i++)
	        {
                 if(a[i] == x)
                 {
                	v[j] = y;
                	v[j+1] = x - y;
                	j += 2;
                 }
                 else
                 {
                	v[j] = a[i];
                	j++;
                 } 
	        }
	        int r = v[index];
	        return r;
}


int sum(int* array, int length)
{
	int sum = 0;
	for (int  i = 0; i < length; i++)
	{
		sum += *(array+i);
	}
	return sum;
}
int* find(int* begin, int* end, int value, int size)
{
	 for (int i = 0; i < size; i++)
	 {
		 if(begin[i] == value)
		 {
			 return begin;
		 }
	 }
	 return end;
}

int reverse(int *arr,int size,int index)
{
   int arr2[size];
   for(int i = (size-1),j = 0; i>=0; i--,j++){
	   arr2[j] = arr[i];
   }
   return arr2[index];
}

int myStrLen(char* s)
{
      int i = 0;
      while (*s != '\0')
      {
           i++;
           s++;
      }
      return i;
}


