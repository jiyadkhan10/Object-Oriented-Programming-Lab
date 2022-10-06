

int sum1(int **p,int r_size,int c_size)
{
//write your code here for task 1
          int x = 0;
          for(int i = 0; i < c_size; i++)
          {
               x +=   *(*(p)+i);
          }
          return x;
}

int sum(int **p,int r_size,int c_size)
{
//write your code here for task 1
          int x = 0;
          int i = 0;
          while(i < c_size)
          {
             x += *(*(p)+i);
             i++;
          }
          return x;
}
int fact(int n)
{
//write your code here for task 2a
      int x = 1;
      int i = 1;
      while (i <= n)
      {
             x *= i;
             i++;
      }
      return x;
}
int refact(int n)
{
//write your code here for task 2b
     if(n > 1)
     { 
          return n * refact(n-1);
     }
     else
     {
          return 1;
     }


}
/*bool isPrime(int n, int d)
{

//write your code here for task 3
}*/

int gcd(int m,int n)
{
//write your code here for task 4
     if( n != 0)
     {
         return gcd(n , m % n); 
     }
     else
     {
          return m;
     }
}
int recLen(char* str)
{

//write your code here for task 5
      if(*str == '\0')
      {
           return 0;
      }
      else
      {
            return 1 + recLen(str + 1);
      }
}

float cubeCalculator(int *p)
{
//write your code here 
       return (*p)*(*p)*(*p);

}

