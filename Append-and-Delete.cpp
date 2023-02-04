#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k)
{
    string result {"Yes"};

    if (s.length() + t.length() > k)
    {
        int i = 0;
        for (  ; i < s.length() && i < t.length(); ++i)
        {
            if (s.at(i) != t.at(i))
                break;
        }

        int minOperations = (s.length() - i) + (t.length() - i);
        if( k >= minOperations && (k - minOperations) % 2 == 0)
            result = "Yes";
        else
            result = "No";
    }
    
    return result;
}
