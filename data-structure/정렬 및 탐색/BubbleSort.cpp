#include<iostream>
//Data Structure
//Bubble sort 구현 
int main(void)
{
    int i,j,temp;
    int array[10]={1,10,5,8,7,6,4,3,2,9};
    for(int i=0;i<10;i++)
    {
        for(j=0;j<9-i;j++) //뒤에서부터 집합의 크기 하나씩 감소
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }


    return 0;
}