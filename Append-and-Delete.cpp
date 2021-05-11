
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
