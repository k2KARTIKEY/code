
    int arr[] = {10, 20, 30, 50, 10, 70, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    vector<int> ans = obj.maxOfMin(arr, n);

    for (int x : ans)
        cout << x << " ";

    return 0;