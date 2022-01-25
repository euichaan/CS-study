#include<iostream>
#include<limits.h>
//Data Structure
//selection sort 구현 
void SelectionSort(int *list,const int n)
{
    int i,j,min,index,temp;
    for(int i=0;i<n;i++)
    {
        min=INT32_MAX;
        for(int j=i;j<n;j++)
        {
            if(min>list[j])
            {
                min=list[j];
                index=j;
            }
        }
        temp=list[i];
        list[i]=list[index];
        list[index]=temp;
    }

}
int main(void)
{

    int arr[]={5,30,28,12,17,74,3};
    SelectionSort(arr,7);
    for(auto& e:arr)
      std::cout << e << " ";
    std::cout<<std::endl;
    return 0;
}
