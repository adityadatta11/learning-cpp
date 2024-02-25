#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> mp;
    mp[0] = "Yahoo";
    mp[1] = "Google";
    mp[2] = "Map";
    mp[3] = "DSA";
    mp[4] = "DS";

    map<int, string>::iterator it_ptr;

    cout << "Key ----------------- Value" << endl;

    for (it_ptr = mp.begin(); it_ptr != mp.end(); it_ptr++) {
        cout << it_ptr->first << " ----------------- " << endl;
        cout << it_ptr->second << " ----------------- " << endl;
    }
    return 0;
}