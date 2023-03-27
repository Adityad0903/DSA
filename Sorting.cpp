#include <iostream>
using namespace std;


class SortingMethods
{
    // Implementing Bubble , Insertion , and Quick Sort

    public : 

        void BubbleSort(int arr[] , int n)
        {
            // Comparing first and second value and swapping if necessary
            // Time Complexity : O(n^2)
            for(int i = 1 ; i < n ; i++)
            {
                for(int j = 0 ; j < n - i ; j++)
                {
                    if(arr[j] > arr[j+1])
                    {
                        // SWAP
                        swap(arr[j],arr[j+1]);
                    }
                }
            }
        }

        void InsertionSort(int arr[] , int n)
        {
            // This method inserts number to it's pinpoint position or right position.
            for(int i = 1 ; i < n ; i++)
            {
                int temp = arr[i];

                int j = i - 1;

                // COMPARING arr[j] and arr[i]
                // IF LESS THAN THEN PUT THE NUMBER IN THE RIGHT POSITION.
                while(j>=0 && arr[j] > temp)
                {
                    arr[j+1] = arr[j];
                    j = j - 1;
                }

                arr[j+1] = temp;
            }
        }

        int partition(int arr[] , int start , int end)
        {
            int pivot = arr[start];

            int count = 0;

            for(int i = start + 1 ; i <= end ; i++)
            {
                if(arr[i] < pivot)
                {
                    count++;
                }
            }

            int pivotIndex = start + count;

            swap(arr[pivotIndex] , arr[start]);

            int i = start;
            int j = end;

            while(i < pivotIndex && j > pivotIndex)
            {
                if(arr[i] < arr[pivotIndex])
                {
                    i++;
                }
                else if (arr[j]>arr[pivotIndex])
                {
                    j--;
                }
                else if(i < pivotIndex && j > pivotIndex)
                {
                    swap(arr[i++],arr[j--]);
                }
            }

            return pivotIndex;
        }

        void QuickSort(int arr[],int start , int end)
        {
            if(start >= end)
            {
                return;
            }

            // PARTITION => till and then sort based on the constraints given below. 
            int p = partition(arr,start,end);

            QuickSort(arr,start,p-1);
            QuickSort(arr,p+1,end);
        }
};

int main(){

return 0;
}