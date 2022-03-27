/*Given two strings s and t of lengths m and n respectively, find the edit distance between the strings.
Edit Distance
Edit Distance of two strings is minimum number of operations required to make one string equal to other.
 In order to do so you can perform any of the following three operations only :
1. Delete a character
2. Replace a character with another one
3. Insert a character
Sample Input 1 :
abc
dc
Sample Output 1 :
2
*/

using namespace std;

int editDistance(string s1, string s2)
{
    if (s1.length() == 0 || s2.length() == 0)
    {
        return max(s1.length(), s2.length());
    }

    if (s1[0] == s2[0])
    {
        return editDistance(s1.substr(1), s2.substr(1));
    }
    else
    {
        //Insert
        int a = editDistance(s1.substr(1), s2);
        //Delete
        int b = editDistance(s1, s2.substr(1));
        //Replace
        int c = editDistance(s1.substr(1), s2.substr(1));

        return min(a, min(b, c)) + 1;
    }
}
