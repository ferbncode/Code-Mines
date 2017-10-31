//kadane for maximum sum subarray with negative numbers too.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d", &arr[i]);
        int dp[n];
        dp[0] = arr[0];
        int max_element = arr[0];
        for(int i=1;i<n;i++)
        {
            dp[i] = max(arr[i], arr[i] + dp[i-1]);
            if(dp[i] > max_element)
                max_element = dp[i];
        }
        cout << max(dp[0], max_element) << endl;
    }
    return 0;
}
