/*Explaination :
The main idea is to use Merge sor because if we do brute force it comes out 0(n^2) but in merge sort its O(nlogn)
Here in merge sort if you know how algo works then it will be easy
Basically we are adding an extra logic to it that whenever the a[i] > a[j] with i<j the count increases.
*/

long long merge(long long arr[], long long temp[], int left, int mid, int right)
{
    long long inv_count = 0;
    int i = left;
    int j = mid;
    int k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

long long merge_Sort(long long arr[], long long temp[], int left, int right)
{
    int mid;
    long long inv_count = 0;
    if (right > left)
    {
        mid = (left + right) / 2;

        inv_count += merge_Sort(arr, temp, left, mid);
        inv_count += merge_Sort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long getInversions(long long *arr, int n)
{
    long long temp[n];
    return merge_Sort(arr, temp, 0, n - 1);
}