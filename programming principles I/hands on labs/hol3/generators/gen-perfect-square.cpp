#include "testlib.h"
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {

    registerGen(argc, argv, 1);

    int N = atoi(argv[1]);
    while (true) {
        int n = rnd.next(1, N);
        double x = sqrt (n);
        int y = x;
        if (y * y == n) {
            printf("%d\n", n);
            break;
        }
    }
    
    return 0;
}