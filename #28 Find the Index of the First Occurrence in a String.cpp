#include <string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
            return 0;

        int h = haystack.size();
        int n = needle.size();

        if (n > h)
            return -1;

        for (int i = 0; i <= h - n; ++i)
        {
            int j = 0;
            while (j < n && haystack[i + j] == needle[j])
            {
                j++;
            }
            if (j == n)
                return i;
        }

        return -1;
    }
};
