# Data structure (자료구조)

## 정렬 및 탐색
- [selection sort (선택 정렬)](https://github.com/euichanhwang/CS_study/blob/main/data-structure/%EC%A0%95%EB%A0%AC%20%EB%B0%8F%20%ED%83%90%EC%83%89/SelectionSort.cpp)  
**정렬되지 않은 정수들 중에서 가장 작은 값을 찾아서 정렬된 리스트 다음 자리에 놓는 정렬방법.**  
`1 10 5 8 7 6 4 3 2 9` 라는 정렬되지 않은 정수에서 가장 작은 값을 찾으면 1이다. 가장 앞으로 보낸다.  
1은 이미 가장 앞에 있으므로 정렬이 이루어졌다. 가장 앞의 1을 제외하고 가장 작은 값은 2인데, 1을 제외  
하고 가장 앞에 있는 원소 10과 바꾸면 `1 2 5 8 7 6 4 3 10 9`가 된다. 이후에 세번째로 가장 작은 값은 3  
인데 이 값을 5와 바꾸면 `1 2 3 8 7 6 4 5 10 9` 가 된다. 이러한 과정을 반복하면 끝까지 반복했을 때  
`1 2 3 4 5 6 7 8 9 10` 이라는 정렬된 정수 리스트를 얻을 수 있다.  
```c++
 for(int j=i;j<n;j++)
        {
            if(min>list[j])
            {
                min=list[j];
                index=j;
            }
        } // 가장 작은 원소를 찾아서 위치를 저장한다
temp=list[i];
        list[i]=list[index];
        list[index]=temp; // 두 원소의 위치를 바꾼다
```
- bubble sort (버블 정렬)
- insertion sort (삽입 정렬)
- quick sort (퀵정렬)
- [binary search (이진 탐색)](https://github.com/euichanhwang/CS_study/blob/main/data-structure/%EC%A0%95%EB%A0%AC%20%EB%B0%8F%20%ED%83%90%EC%83%89/BinarySearch.cpp)

---

## class 배열
