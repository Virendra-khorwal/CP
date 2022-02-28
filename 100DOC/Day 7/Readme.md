Problem 1: [Sort 0 1 2](https://www.codingninjas.com/codestudio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280153?leftPanelTab=0)

Solution:

```c++

void sort012(int *arr, int n)
{
    int countzero=0,countone=0,counttwo=0;
   for(int i=0;i<n;i++)
   {
     if(arr[i]==0)
     {
         countzero++;
     }
       if(arr[i]==1)
       {
          countone++;
       }
       if(arr[i]==2)
       {
           counttwo++;
       }
   }
   int i=0;
   while(countzero !=0)
   {
       arr[i]=0;
       i++;
       countzero--;
   }
    while(countone !=0)
   {
       arr[i]=1;
       i++;
       countone--;
   }
    while(counttwo !=0)
   {
       arr[i]=2;
       i++;
       counttwo--;
   }
}

```
