// Linear Search and Binary Search
#include <iostream>
using namespace std;

// Implementing Searching using Class and Object approach

class SearchingMethods
{
    public:

        void Linear_Search(int n , int arr[], int key)
        {
            bool found = false;
            // Linear Search : Finding element one by one 
            // Complexity : O(n)
            for(int i = 0 ; i < n ; i++)
            {
                if(arr[i] == key){
                    found = true;
                    cout << "Element found " << endl;
                    break;
                }
            }

            if (found == false){
                cout << "Element not found " << endl;
            }
        }

        void Binary_Search(int n , int arr[] , int key)
        {
            // One of the major constraints of this type of search is that the array should be sorted!!

            bool found = false;
            // Creating two 'pointers' one at the beginning and one at the end 
            int low = 0;
            int high = n;

            while(low <= high)
            {
                // finding mid every iteration
                int mid = (low + high) / 2;

                if (arr[mid] == key)
                {
                    found = true;
                    cout << "Element found " << endl;
                    break;
                }
                else if(arr[mid] > key)
                {
                    // Updating Array by updating high 
                    high = mid - 1 ;
                }
                else if (arr[mid] < key)
                {
                    // Updating Array by updating low 
                    low = mid + 1;
                }

            }

            if( found == false){
                cout << "Element not found " << endl;
            }
        }
};

int main(){

    cout << "Enter the size of the array : ";int n; cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cout << "Enter the element ino the array : ";cin >> arr[i];
    }

    // Creating an Object of the class
    SearchingMethods object;

    cout << "Enter the key you want to find : "; int key ; cin >> key;


    // Calling the method Linear_Search
    object.Linear_Search(n,arr,key);

    object.Binary_Search(n,arr,key);
 

    return 0;
}