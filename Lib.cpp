#include "Lib.h"
#include <algorithm>


//change
namespace Lib {

    // Sorts an array of integers in ascending order
    void sortArray(std::vector < int >& arr) {
        std::sort(arr.begin(), arr.end());
    }

    // Reverses the order of elements in an array of integers
    void reverseArray(std::vector < int >& arr) {
        std::reverse(arr.begin(), arr.end());
    }

    // Permutes the numbers in even and odd positions in an array of integers
    void permuteArray(std::vector < int >& arr) {
        for (int i = 0; i < arr.size() - 1; i += 2) {
            std::swap(arr[i], arr[i + 1]);
        }
    }

}

