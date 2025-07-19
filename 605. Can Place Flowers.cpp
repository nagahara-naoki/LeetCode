// あなたは、いくつかの区画には花が植えられていて、いくつかの区画には植えられていない、長い花壇を持っています。
// ただし、隣接する区画には花を植えることができません。
// 整数の配列 f が与えられます。ここで、0 は「空いている区画」、1 は「花が植えられている区画」を表します。また、整数 n も与えられます。
// 隣接する区画に花を植えないというルールを守りながら、n 本の新しい花を植えることができるなら true を、できないなら false を返してください。

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &f, int n)
    {
        int c = 0; // 可能数
        int size = f.size();
        for (int i = 0; i < size; i++)
        {
            if (f[i] == 0)
            {
                bool lEmp = i == 0 || f[i - 1] == 0;
                bool rEmp = i == size - 1 || f[i + 1] == 0;

                if (lEmp && rEmp)
                {
                    f[i] = 1;
                    c++;
                }
            }
        }

        for (int i : f)
        {
            // std::cout << i;
        }

        std::cout << c;
        return c >= n;
    }
};
