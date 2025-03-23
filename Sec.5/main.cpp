#include <iostream>

using namespace std;
int compstr(const char* ,const char*);
int main()
{
    const char* str1 = "apple";
    const char* str2 = "banana";
    const char* str3 = "apple";
    const char* str4 = "apples";

    cout << "Comparing \"" << str1 << "\" and \"" << str2 << "\": " << compstr(str1, str2) << endl;
    cout << "Comparing \"" << str1 << "\" and \"" << str3 << "\": " << compstr(str1, str3) << endl;
    cout << "Comparing \"" << str1 << "\" and \"" << str4 << "\": " << compstr(str1, str4) << endl;
    cout << "Comparing \"" << str2 << "\" and \"" << str1 << "\": " << compstr(str2, str1) << endl;

    return 0;
}
int compstr(const char* s1, const char* s2)
{
    while (*s1 && *s2)
     {
        if (*s1 < *s2)
            return -1;
        if (*s1 > *s2)
            return 1;

        s1++;
        s2++;
    }


    if (*s1) return 1;
    if (*s2) return -1;
    return 0;
}
