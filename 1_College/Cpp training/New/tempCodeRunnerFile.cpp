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