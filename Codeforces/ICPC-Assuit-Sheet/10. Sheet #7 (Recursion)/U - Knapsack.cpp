#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int index, int remaining_capacity, const vector<int> &weights, const vector<int> &values)
{

    if (index < 0 || remaining_capacity <= 0)
    {
        return 0;
    }
    int exclude_item = knapsack(index - 1, remaining_capacity, weights, values);
    int include_item = 0;
    if (weights[index] <= remaining_capacity)
    {
        include_item = values[index] + knapsack(index - 1, remaining_capacity - weights[index], weights, values);
    }
    return max(include_item, exclude_item);
}

int main()
{
    int N, W;
    cin >> N >> W;

    vector<int> weights(N);
    vector<int> values(N);

    for (int i = 0; i < N; i++)
    {
        cin >> weights[i] >> values[i];
    }

    cout << knapsack(N - 1, W, weights, values) << endl;

    return 0;
}
