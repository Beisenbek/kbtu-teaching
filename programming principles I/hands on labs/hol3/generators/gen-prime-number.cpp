#include "testlib.h"
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

inline bool check (int x) {
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; ++ i) {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main(int argc, char *argv[]) {

    registerGen(argc, argv, 1);

    int N = atoi(argv[1]);

    while (true) {
        int x = rnd.next(1, N);
        if (check (x)) {
            printf ("%d\n", x);
            break;
        }
    }
    
    return 0;
}