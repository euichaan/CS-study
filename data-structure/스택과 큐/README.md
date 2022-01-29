## 스택과 큐
### 스택(stack)
**톱(top)이라고 하는 한쪽 끝에서 모든 삽입(push)과 삭제(pop)가 일어나는 순서 리스트**  
- 중간의 원소를 빼거나 넣을 수 없다.  
- **후입선출(LIFO,Last-In-First-Out) 리스트이다.**  

💡**스택에 원소를 삽입하고 삭제하는 과정**
![스택의 삽입과 삭제](https://github.com/euichanhwang/CS_study/blob/main/img/%EC%8A%A4%ED%83%9D%EC%9D%98%20%EC%82%BD%EC%9E%85%EA%B3%BC%20%EC%82%AD%EC%A0%9C%201.png)  
### 시스템 스택  
**os가 만든 스택. 프로그램 실행 시 함수 호출을 처리한다.**  
함수 호출시 활성 레코드 또는 스택 프레임 구조 생성해서 시스템 스택의 톱에 둔다.os가 스택을 만들어서 main을 제일 먼저 넣는다.   
거기서 함수 f1을 부르면 스택의 main 위에 f1을 둔다.f1에서 또 f2를 호출하면 f2를 f1위에 둔다.  
따라서 **main->f1->f2**구조인데, f2함수가 끝나야지만(pop)그다음 f1을  진행할 수 있다.제일 마지막에 나온 f2함수가 처리 후  
return 해야 f1을 수행할 수 있다. f1을 수행한 후  스택에서 pop 되어야만 main을 수행할 수 있다.따라서, 함수 호출이 LIFO 구조이다.    
이전 스택 프레임에 대한 포인터, 복귀 주소, 지역 변수, 매개 변수가 필요하다.  

💡**stack 추상 데이터 타입**
```c++
Template <class T>
class Stack
{
    //0개 이상의 원소를 가진 유한 순서 리스트.
public:
    Stack(int stackCapacity=10);//처음크기 stackCapacity 공백 스택 생성
    bool isEmpty() const; // 스택 원소 수가 0이면 true,아니면 false 반환
    T& Top() const; // 스택의 top 원소를 반환
    void Push(const T&item); //스택의 톱에 item을 삽입
    void Pop();//스택의 톱 원소를 삭제
};
```  
### 스택 구현
- 일차원 배열 stack[]사용  
- i번째 원소는 stack[i-1]에 저장  
- 변수 top은 스택의 최상위 원소를 가리킴(초기 top : -1, 공백 스택을 의미함)  
```c++
private:
    T* stack;
    int top; //톱 원소의 위치
    int capacity; //스택 배열의 크기
template <class T>
Stack<T>::Stack(int stackCapacity)
    :capacity(stackCapacity)
{
    if(capacity<1) throw"Stack capacity must be >0"
    stack=new T[capacity];
    top=-1; //초기값이 1임에 주의
}
//isEmpty(),Top(),Push(x) 함수 구현
template <class T>
inline bool Stack<T>::IsEmpty()const {return top==-1;}

template <class T>
T& Stack<T>::Top()const
{
    if(isEmpty()) throw "Stack is Empty";
    return stack[top];
}

template <class T>
void Stack<T>::Push(const T&X)
{
    if(top==capacity-1) //꽉 찼다면
    {
        ChangeSizeID(stack,capacity,2*capacity); //2배의 capacity로 늘린다
        capacity*=2;
    }
    stack[++top]=x; //top의 초기값은 -1이다
}
template <class T>
void Stack<T>::Pop()
{
    if(isEmpty()) throw "Stack is empty.Cannot delete"
    //top에 있는 것을 없애야 하는데 어떤 타입인지 모른다 => 소멸자를 부른다.
    stack[top--].~T();
}
```  




