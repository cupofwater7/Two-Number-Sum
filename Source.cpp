#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int>array, int targetSum);

int main()
{
    vector<int> output = twoNumberSum({ 3, 5, -4, 8, 11, 1, -1, 6 }, 10);
    cout << output[0] << " " << output[1];
    return 0;
}

vector<int> twoNumberSum(vector<int>array, int targetSum)
{
    unordered_set<int> nums;
    for (int num : array)
    {
        int potentialMatch = targetSum - num;
        if (nums.find(potentialMatch) != nums.end())
        {
            return{ potentialMatch,num };
        }
        else
        {
            nums.insert(num);
        }
    }
    return{};
}