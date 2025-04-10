#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool possible(const vector<int> &barns, int cows, int mid)
{
    int count = 1;           // Start by placing the first cow in the first barn
    int last_pos = barns[0]; // The position of the last placed cow

    for (int i = 1; i < barns.size(); i++)
    {
        if (barns[i] - last_pos >= mid)
        {
            count++;
            last_pos = barns[i]; // Place cow here
            if (count == cows)
                return true; // All cows are placed
        }
    }
    return count >= cows;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cows;
        cin >> n >> cows;
        vector<int> barns(n);
        for (int i = 0; i < n; i++)
        {
            cin >> barns[i];
        }
        sort(barns.begin(), barns.end());
        int low = 1, high = barns[n - 1] - barns[0];
        int answer = 0;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (possible(barns, cows, mid))
            {
                answer = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
