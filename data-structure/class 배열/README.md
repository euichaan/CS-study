## class 배열

### 추상 데이터 타입으로서의 배열  
배열(array)를 추상 데이터 타입(ADT)의 관점에서 보면, 대부분 '일련의 연속적인 메모리 위치'  
로 본다. 보통 배열의 일련의 연속적인 메모리 위치로 구현되는 것이 보통이지만 반드시 그런것도  
아니다. **배열은 인덱스와 값 <index,value>의 쌍으로 구성된 집합으로서**, 정의된 각 인덱스는  
그 인덱스와 관련된 값을 가진다.  
~~~c++
Class GeneralArray//GeneralArray 추상 데이터 타입
{
//IndexSet에 있는 각 index의 값에 대하여 float 타입의 value가 존재하는
//<index,value>쌍의 집합. IndexSet은 일차원 또는 다차원의 유한 순서 집합이다.
public:
    GeneralArray(int j,RangeList list,float initValue=defaultValue);
    // j차원의 실수 배열을 생성한다.
    // k번째 인덱스의 범위는 list의 k번째 원소로 정해진다.
    // 인덱스 집합의 인덱스 i에 대해 <i,initValue>를 배열에 삽입한다.
    float Retrieve(index i);
    // i가 배열의 index 집합에 있으면 배열에서 i와 쌍이 되는 float를 반환하고,
    // 그렇지 않으면 예외를 발생시킨다.
    void Sotre(index i,float x);
    // i가 배열의 index 집합에 있으면 배열에서 i와 쌍이 되는 값을 x로 대체하고,
    // 그렇지 않으면 예외를 발생시킨다.
};

~~~  
### 배열을 이용한 다항식의 덧셈 구현  
h파일(헤더),cpp파일(구현부)를 나누어서 구현한다.  
- [lab_poly.cpp](https://github.com/euichanhwang/CS_study/blob/main/data-structure/class%20%EB%B0%B0%EC%97%B4/lab_poly.cpp)  
항의 개수를 입력받은 후, 다항식 class의 객체에 저장한다. 그 후, 다항식끼리 덧셈 연산을 수행한 후 결과를 반환한다.  
- [poly.h](https://github.com/euichanhwang/CS_study/blob/main/data-structure/class%20%EB%B0%B0%EC%97%B4/poly.h)  
헤더 파일에는 함수 원형과 동적 배열 선언을 구현한다.  
- [poly.cpp](https://github.com/euichanhwang/CS_study/blob/main/data-structure/class%20%EB%B0%B0%EC%97%B4/poly.cpp)
헤더에서 정의한 함수를 구현하고, 더하기 연산자 오버로딩과 출력 연산자 오버로딩을 구현한다.  



