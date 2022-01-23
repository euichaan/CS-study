#include<iostream>
//Data Structure
//selection sort 구현 
void SelectionSort(int *list,const int n)
{
    int temp,least;
    for(int i=0;i<n-1;i++)
    {
        least=i;
        for(int j=i+1;j<n;j++)
        {
            if(list[j]<list[least])
                least=j; 
        }
        temp=list[i];
        list[i]=list[least];
        list[least]=temp;

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
