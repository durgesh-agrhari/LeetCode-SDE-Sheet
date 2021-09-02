#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, arr[20], j, no;
    cout << "Enter Size of array: ";
    cin >> no;
    cout << "Enter any " << no << " num in array: ";
    for (i = 0; i < no; i++)
    {
        cin >> arr[i];
    }
    cout << "Dublicate Values are: ";
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "\n"
                     << arr[i];
            }
        }
    }
}


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int curr_1 = nums[0];
//         int curr_2 = nums[0];
//         while (1) {
//             curr_1 = nums[curr_1];
//             curr_2 = nums[nums[curr_2]];
//             if (curr_1 == curr_2) break;
//         }
//         curr_1 = nums[0];
//         while (curr_1!=curr_2) {
//             curr_1 = nums[curr_1];
//             curr_2 = nums[curr_2];
//         }
//         return curr_2;
//     }
// };

