#include <iostream>
#include <cstring>

using namespace std;

int GCD(int m, int a) { //greatest common divisor
    static int fcn_calls = 0;
    fcn_calls++;

    if (m % a == 0) {
        cout << "counter: " << fcn_calls << endl;
        return a;
    }
    else {
        int r = m % a;
        GCD(a, r);
    }
 }
        

size_t size(const char *s1) { // size of string s1
    size_t len = 0;
    if (*s1 != '\0') {
        len++;
        size(s1++);
    }
    else return len;
}

bool streq(const char* s1, const char* s2, int n) { // assert of the first characters of the two strings match
    int i = 0;
    while (i < n) {
        if (s1[i] != s2[i]) {
            return false;
        }
        i++;
    }
    return true;
}

/*void* memcry(void* s1, const void* s2, unsigned n) { // для разыменования приводим из void к char*
   char *from = static_cast<char*>(s2), 
       *to = static_cast<char*>(s1);
}*/

int main()
{
    const char s1[16] = "hello my friend"; // для метода strlen и streq
    const char s2[12] = "hello World";
    int n;
    cout << "input n: " << endl;
    cin >> n;
    cout << "true or false: " << streq(s1, s2, n) << endl;
    cout << "size of string" << strlen(s1) << endl;
    int m, a;  // для метода GCD
    cout << "input m and a "<< endl;
    cin >> m >> a;
    cout << GCD(m, a) << endl;
    return 0;
}