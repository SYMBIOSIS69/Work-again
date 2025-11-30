#include <vector>
using namespace std;

vector<int> quickSort(vector<int> arr) {
    if (arr.size() <= 1) {
        return arr;
    }
    
    int pivot = arr[arr.size() / 2];
    vector<int> left, middle, right;
    
    for (int num : arr) {
        if (num < pivot) {
            left.push_back(num);
        } else if (num > pivot) {
            right.push_back(num);
        } else {
            middle.push_back(num);
        }
    }
    
    vector<int> sortedLeft = quickSort(left);
    vector<int> sortedRight = quickSort(right);
    
    vector<int> result;
    result.insert(result.end(), sortedLeft.begin(), sortedLeft.end());
    result.insert(result.end(), middle.begin(), middle.end());
    result.insert(result.end(), sortedRight.begin(), sortedRight.end());
    
    return result;
}