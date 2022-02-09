#include <iostream>
#include <sstream>
#include<string>
using namespace std;
 
int countWords(string str)
{
    stringstream s(str);
    string word;
 
    int count = 0;
    while (s >> word)
        count++;
    return count;
}
int main()
{
    string s = "BVRIT HYDERABAD College of Engineering for Women";
    cout << " Number of words are: " << countWords(s);
    return 0;
}
