//bubblesort training
#include <stdio.h>
#include <iostream>


void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort(int arr[], int n)
{
  int i = 0;
  int j = 0;

  while (i < n - 1)
    {
      j = 0;
      while (j < n - i - 1)
	{
	  if (arr[j] > arr[j + 1])
	    swap(&arr[j], &arr[j+1]);
	  j++;
	}
      i++;
    }
}

void printArr(int arr[], int size)
{
  int i = 0;

  while (i < size)
    {
      std::cout << arr[i] << " ";
      i++;
    }
  
}

int main(int ac, char **av)
{
  int size;
  std::cout << "Enter Array Size: ";
  std::cin >> size;

  int arr[size];
  int i = 0;
  int j = 0;
  int n;

  std::cout << std::endl;
  std::cout << "Enter numbers randomly: " << std::endl;
  while (i < size)
    {
      std::cin >> arr[i];
      i++;
    }

  std::cout << std::endl;
  std::cout << "Input array is: " << std::endl;

  while (j < size)
    {
      std::cout << "Value at " << j << " Index: " << arr[j] << std::endl;
      j++;
    }

  std::cout << std::endl;
  bubbleSort(arr, size);
  printArr(arr, size);
}
