//#include <iostream>
//using namespace std;
//
//template <typename T>
//void printArray(T arr[]) {}
//
//void printArray(int arr[]) {
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void printArray(string arr[]) {
//    for (int i = 0; i < 4; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//template <typename T>
//void selectionSort(T arr[]) {
//    int n;
//
//    if constexpr (is_same<T, int>::value)
//        n = 5;
//    else
//        n = 4;
//
//    for (int i = 0; i < n - 1; i++) {
//        int smallSub = i;
//
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j] < arr[smallSub]) {
//                smallSub = j;
//            }
//        }
//
//        T temp = arr[i];
//        arr[i] = arr[smallSub];
//        arr[smallSub] = temp;
//    }
//}
//
//int main() {
//    int intArray[5] = { 64, 25, 12, 22, 11 };
//    cout << "Original integer array: ";
//    printArray(intArray);
//
//    selectionSort(intArray);
//
//    cout << "Sorted integer array: ";
//    printArray(intArray);
//
//    string stringArray[4] = { "apple", "orange", "banana", "grape" };
//    cout << endl << "Original string array: ";
//    printArray(stringArray);
//
//    selectionSort(stringArray);
//
//    cout << "Sorted string array: ";
//    printArray(stringArray);
//
//    return 0;
//}