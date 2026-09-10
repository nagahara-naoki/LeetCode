public class Solution
{
    public int StrStr(string haystack, string needle)
    {
        // haystack の各位置を「検索開始位置」として順番に試す
        // needle が入り切る位置まで調べればよい
        for (int i = 0; i <= haystack.Length - needle.Length; i++)
        {
            // 今回の開始位置 i から needle が一致すると仮定する
            bool isMatch = true;

            // needle の文字を1文字ずつ確認する
            for (int j = 0; j < needle.Length; j++)
            {
                // haystack の i から j 文字先と
                // needle の j 文字目を比較する
                if (haystack[i + j] != needle[j])
                {
                    // 1文字でも違えば、この開始位置 i は不一致
                    isMatch = false;

                    // これ以上比較する必要がないので終了
                    break;
                }
            }

            // needle の全ての文字が一致していたら
            if (isMatch)
            {
                // 一致し始めた位置を返す
                return i;
            }
        }

        // 最後まで見つからなかった場合
        return -1;
    }
}
