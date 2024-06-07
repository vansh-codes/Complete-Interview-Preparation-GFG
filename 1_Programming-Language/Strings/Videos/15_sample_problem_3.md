### Checking Anagrams

#### Problem Description
Given two strings, determine if they are anagrams of each other. Anagrams are strings that have the same characters but in a different order.

#### Example
- Input: `"listen"`, `"silent"`
  - Output: `true`
- Input: `"hello"`, `"world"`
  - Output: `false`

#### Method: Efficient Solution Using Frequency Arrays
1. **Approach**:
   - Initialize two frequency arrays of size 26, one for each string, initialized to all zeroes.
   - Traverse both strings, incrementing the count of each character in the corresponding frequency array.
   - Compare the frequency arrays. If they are identical, the strings are anagrams.

2. **Example**:
   - Input: `"listen"`, `"silent"`
   - Frequency arrays after traversal:
     - `Frequency Array 1`: `[0, 1, 0, 0, 1, 0, ..., 1]`
     - `Frequency Array 2`: `[0, 1, 0, 0, 1, 0, ..., 1]`
   - Output: `true`

3. **Time Complexity**: 
   - Linear time complexity: `O(n)` (Traversing both strings once).
   - No additional traversals required.

4. **Space Complexity**:
   - Constant space: `O(26)` for the frequency arrays.

#### Code Implementation

```cpp
#include <iostream>
#include <string>
#include <vector>

bool areAnagrams(const std::string &str1, const std::string &str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    std::vector<int> freq1(26, 0), freq2(26, 0);
    for (char ch : str1) {
        freq1[ch - 'a']++;
    }
    for (char ch : str2) {
        freq2[ch - 'a']++;
    }
    return freq1 == freq2;
}

int main() {
    std::string str1 = "listen";
    std::string str2 = "silent";
    std::cout << "Are anagrams? " << std::boolalpha << areAnagrams(str1, str2) << std::endl;
    return 0;
}
```

#### Explanation of the Code
1. **Function**: `areAnagrams`
   - Compares the lengths of the two strings. If they are not equal, returns `false`.
   - Creates two frequency arrays to track the count of each character in both strings.
   - Traverses both strings, incrementing the count of each character in the corresponding frequency array.
   - Compares the frequency arrays. If they are identical, returns `true`; otherwise, returns `false`.

2. **Main Function**:
   - Calls `areAnagrams` with example strings.
   - Prints the result.

#### Summary
This efficient solution for checking anagrams utilizes frequency arrays to track the count of characters in both strings. It traverses both strings only once and provides a linear time complexity solution with constant auxiliary space.


3. **Time Complexity**:
   - Traversing both strings: `O(n)` (Where `n` is the length of the strings).
   - Comparing frequency arrays: `O(26)` (Constant time for comparing arrays of fixed size).
   - Overall: `O(n)`.

4. **Space Complexity**:
   - Frequency arrays: `O(26)` (Constant space for storing frequencies).

#### Approach 2: Sorting

1. **Approach**:
   - Sort both strings alphabetically.
   - Compare the sorted strings. If they are equal, the original strings are anagrams.

2. **Example**:
   - Input: `"listen"`, `"silent"`
   - After sorting:
     - `"listen"` becomes `"eilnst"`
     - `"silent"` becomes `"eilnst"`
   - Output: `true`

3. **Time Complexity**:
   - Sorting both strings: `O(n log n)` (Assuming the sorting algorithm used).
   - Comparing sorted strings: `O(n)` (Traversing both sorted strings once).
   - Overall: `O(n log n)`.

4. **Space Complexity**:
   - Additional space for sorting: `O(1)` (If in-place sorting algorithm is used).

#### Example Code (C++):

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Approach 1: Frequency Counting
bool areAnagramsFreq(const string& s1, const string& s2) {
    if (s1.size() != s2.size()) return false;

    vector<int> freq(26, 0);

    for (char c : s1) freq[c - 'a']++;
    for (char c : s2) freq[c - 'a']--;

    for (int f : freq) {
        if (f != 0) return false;
    }

    return true;
}

// Approach 2: Sorting
bool areAnagramsSort(const string& s1, const string& s2) {
    if (s1.size() != s2.size()) return false;

    string sorted_s1 = s1, sorted_s2 = s2;
    sort(sorted_s1.begin(), sorted_s1.end());
    sort(sorted_s2.begin(), sorted_s2.end());

    return sorted_s1 == sorted_s2;
}

int main() {
    string s1 = "listen";
    string s2 = "silent";

    // Approach 1
    if (areAnagramsFreq(s1, s2)) {
        cout << "Approach 1: Frequency Counting: Anagrams\n";
    } else {
        cout << "Approach 1: Frequency Counting: Not Anagrams\n";
    }

    // Approach 2
    if (areAnagramsSort(s1, s2)) {
        cout << "Approach 2: Sorting: Anagrams\n";
    } else {
        cout << "Approach 2: Sorting: Not Anagrams\n";
    }

    return 0;
}
```

#### Summary
Both approaches offer efficient solutions for checking anagrams:
- Approach 1 utilizes frequency arrays to count character occurrences, offering a linear time complexity of `O(n)`.
- Approach 2 sorts both strings alphabetically, providing a time complexity of `O(n log n)` due to sorting overhead.
While Approach 1 is more space-efficient, Approach 2 simplifies the comparison logic by sorting the strings. Depending on the specific requirements and constraints, either approach can be chosen.