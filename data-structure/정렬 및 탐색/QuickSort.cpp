#include<iostream>
//Data Structure
//quick sort 구현 
int number = 10;
int data[10]= {1,10,5,8,7,6,4,3,2,9};
void quickSort(int *data,int start,int end)
{
    if(start>=end) return; //원소가 1개인 경우
    int key=start; //키는 첫번째 원소 . Pivot
    int i=start+1; //i 는 왼쪽 출발지점
    int j=end; // j 는 오른쪽 출발지점
    int temp;

    while(i<=j) //엇갈릴 때 까지 반복 . 왼쪽 값과 pivot 값을 바꾼다
    {
        while(i<=end && data[i]<=data[key]) //키 값보다 큰 값을 만날때까지
        {
            i++;
        }
        while(data[j]>=data[key] && j>start) //키 값보다 작은 값을 만날때까지 
        {
            j--; 
        }
        if(i>j) //엇갈린 상태면 키값과 교체
        {
            temp=data[j];
            data[j]=data[key];
            data[key]=temp;
        }
        else{ //엇갈리지 않았다면 두개의 값 교체
            temp=data[j];
            data[j]=data[i];
            data[i]=temp;
        }
    }
    quickSort(data,start,j-1);
    quickSort(data,j+1,end);
    
}
int main(void)
{
    quickSort(data,0,number-1);
     for(auto& e:data)
      std::cout << e << " ";
    std::cout<<std::endl;


    return 0;
}