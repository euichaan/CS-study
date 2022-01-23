#include <iostream>
#include <algorithm>
// Data Structure
// Binary Search
int BinarySearch(int *list, const int key, const int n)
{
  int left = 0;
  int right = n - 1;
  while (left <= right) 
  {
    int middle = (left + right) / 2;
    if (key < list[middle])
      right = middle - 1;
    else if (key > list[middle]) left=middle+1;
      else return middle;
  }
  return -1; // not found
}
int main()
{

  int result;
  int arr[] = {5, 30, 28, 12, 17, 74, 3};
  std::sort(arr, arr + 7);
  for (auto &e : arr)
    std::cout << e << " ";
  std::cout << std::endl;
  result=BinarySearch(arr,28,7);

  std::cout << result+1 <<" 번째 위치" <<  std::endl; //배열 요소 0부터 시작, result +1

  return 0;
}