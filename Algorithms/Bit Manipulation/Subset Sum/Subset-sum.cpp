/*

Project Name: Algopedia
Author: Rahul Mishra
contact: rahul.mishra2003@gmail.com

This is a simple procedure than generates all subsets for n elements
and the complexity for this O(2^n)


here,

N, is the number of elements in the set.
M, is the value we want from our subset.
Array , array that contains the value of elements ,it's based 1 array.


Note :
use this procedure only for the values of n <= 1000. Otherwise , You will get TLE(Time Limit Exceeded).



Idea: 

The basic idea is that it iterates over the elements in the range of 1 to 2^n-1
because the binary representation of all those numbers over this range will
give us all possible subsets for the set.



*/


#include<iostream>
using namespace std;

bool subset_sum(long int m,int n,long int *Array)
{

  for(int i =1;i<=(1<<n)-1;i+=1)  

   {
      long int total = 0;
      long int temp = i;
      int index = 1;
      while(temp > 0)
      {

          if(temp&1)
            total+=Array[index];
          temp=temp>>1;
          index+=1;


      }

      if (total == m)
      {
    
        return true;
      }
    }

   return false;


}

int main()
{
  long int array[] = {1,2,3,4};
  if (subset_sum(4,3,array))
    cout<<"Subset is there.";
  else
    cout<<"Subset is not possible.";
  return 0;
}