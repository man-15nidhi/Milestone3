// 2.C++ program to merge two sorted arrays

#include<iostream>
using namespace std;

void mergeArrays(int nums1[], int nums2[], int m,

                             int n, int nums3[])
{

    int i = 0, j = 0, k = 0;
 

    // Traverse both array

    while (i<m && j <n)

    {

        // Check if current element of first

        // array is smaller than current element

        // of second array. If yes, store first

        // array element and increment first array

        // index. Otherwise do same with second array

        if (nums1[i] < nums2[j])

            nums3[k++] = nums1[i++];

        else

            nums3[k++] = nums2[j++];

    }
 

    // Store remaining elements of first array

    while (i < m)

        nums3[k++] = nums1[i++];
 

    // Store remaining elements of second array

    while (j < n)

        nums3[k++] = nums2[j++];
}
 
// Driver code

int main()
{

    int arr1[] = {1, 3, 5, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 

    int arr2[] = {2, 4, 6, 8};

    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 

    int arr3[n1+n2];

    mergeArrays(arr1, arr2, n1, n2, arr3);
 

    cout << "Array after merging" <<endl;

    for (int i=0; i < n1+n2; i++)

        cout << arr3[i] << " ";
 

    return 0;
}



