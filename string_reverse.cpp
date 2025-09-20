#include <iostream>
#include <string>
using namespace std;

void reverse(string& st) {
    int size = st.length();
    for (int i = 0; i < size / 2; i++) {
        swap(st[i], st[size - i - 1]);
    }
}

int main() {
    cout << "Enter a string: " << endl;

    string* s = new string;     // dynamically allocate string
    cin >> *s;                  // input into the string

    int size = s->length();

    reverse(*s);                // pass the actual string to the function

    cout << *s << endl;

    delete s;

    return 0;
}
