// A social media app wants to count the number of hashtags (#) and mentions (@) in a post.
#include <iostream>
using namespace std;

int main() {
    string post;
    getline(cin, post);

    int hash = 0, mention = 0;

    for (int i = 0; i < post.length(); i++) {
        if (post[i] == '#')
            hash++;
        if (post[i] == '@')
            mention++;
    }

    cout << "# = " << hash << endl;
    cout << "@ = " << mention << endl;

    return 0;
}