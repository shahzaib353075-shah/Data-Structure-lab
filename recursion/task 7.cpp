#include <iostream>
using namespace std;


int findLargest(int arr[], int size, int index = 1)
{
    if (index == size)
        return arr[0];

    int maxRest =
        findLargest(arr, size, index + 1);

    if (arr[index] > maxRest)
        return arr[index];

    return maxRest;
}


bool subsetSum(int arr[], int size,
    int index, int target)
{
 
    if (target == 0)
        return true;

    if (index == size || target < 0)
        return false;

   
    return subsetSum(arr, size,
        index + 1,
        target - arr[index])

        ||

        subsetSum(arr, size,
            index + 1,
            target);
}


int magicNumber(int arr[], int size)
{
    if (size == 0)
        return -1;

    int largest = findLargest(arr, size);

    int temp[100];
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != largest)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    if (subsetSum(temp, j, 0, largest))
        return largest;

    return -1;
}

int main()
{
    int arr[] = { 2, 3, 5, 8, 13 };

    int size = 5;

    cout << "Magic Number: "
        << magicNumber(arr, size);

    return 0;
}