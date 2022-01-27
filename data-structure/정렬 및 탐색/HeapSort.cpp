#include<iostream>
//Data Structure
//Heap sort 구현 
using namespace std;
int number=9;
int heap[9]={7,6,5,8,3,5,9,1,6};
int main(void)
{
    // 전체 트리 구조를 최대 힙 구조로 만든다.
    for(int i=1;i<number;i++)
    {
        int child=i;
        do{
            int root=(child-1)/2; //자기 자신의 부모를 의미
            //부모의 값보다 자식의 값이 더 크면 위치를 바꿈.
            if(heap[root]<heap[child])
            {
                int temp=heap[root];
                heap[root]=heap[child];
                heap[child]=temp;
            }
            child=root; //자식의 부모로 이동
        }while(child!=0);
    }
    //크기 줄이면서 반복적으로 힙 구성
    for(int i=number-1;i>=0;i--)
    {
        int temp=heap[0]; //0번째 인덱스가 제일 큰 값
        heap[0]=heap[i];
        heap[i]=temp;
        int root=0;
        int child=1;
        do{    
            child=2*root+1;
            //자식 중에 더 큰값을 찾기
            if(heap[child]<heap[child+1]&&child<i-1)
            {
                child++;
            }
            //루트보다 자식이 더 크다면 교환
            if(heap[root]<heap[child]&&child<i)
            {
                int temp=heap[root];
                heap[root]=heap[child];
                heap[child]=temp;
            }
            root=child;
        }while(child<i);

    }

    //출력
    for(int i=0;i<number;i++)
        cout <<heap[i] << " ";


    return 0;
}