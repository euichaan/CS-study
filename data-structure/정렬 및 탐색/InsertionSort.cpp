#include<iostream>
//Data Structure
//Insertion sort 구현 
int main(void)
{
    int i,j,temp;
     int array[10]={1,10,5,8,7,6,4,3,2,9};
     for(int i=0;i<9;i++)
     {
         j=i;
         while(array[j]>array[j+1])
         {
             temp=array[j];
             array[j]=array[j+1];
             array[j+1]=temp;
             /* 옆에있는것과 비교, 하나씩 내려가면서 
             옆 원소가 더 크다면 바꿔준다*/
             j--; 
             if(j<0)
                break;
         }

     }


    return 0;
}