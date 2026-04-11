//#include <iostream>
//using namespace std;
//
//template <typename T>
//int binarySearch(T arr[], T key, int n) {
//    int low = 0, high = n - 1;
//
//    while (low <= high) {
//        int mid = (low + high) / 2;
//
//        if (arr[mid] == key)
//            return mid;
//        else if (arr[mid] < key)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//
//    return -1;
//}
//
//template <typename T>
//void printSearchResult(int index, T key) {
//    if (index != -1)
//        cout << "Element " << key << " found at index " << index << endl;
//    else
//        cout << "Element " << key << " not found" << endl;
//}
//
//int main() {
//    int intArray[5] = { 11, 12, 22, 25, 64 };
//    int intKey = 22;
//    int intIndex = binarySearch(intArray, intKey, 5);
//    printSearchResult(intIndex, intKey);
//
//    float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
//    float floatKey = 2.71;
//    int floatIndex = binarySearch(floatArray, floatKey, 4);
//    printSearchResult(floatIndex, floatKey);
//
//    string stringArray[4] = { "apple", "banana", "grape", "orange" };
//    string stringKey = "grape";
//    int stringIndex = binarySearch(stringArray, stringKey, 4);
//    printSearchResult(stringIndex, stringKey);
//
//    return 0;
//}