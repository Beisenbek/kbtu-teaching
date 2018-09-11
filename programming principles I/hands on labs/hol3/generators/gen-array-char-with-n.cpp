#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {

    registerGen(argc, argv, 1);

    int N = atoi(argv[1]);
    int M = atoi(argv[2]);

    int n = rnd.next(1, N);
    printf("%d\n", n);
    for (int i = 1; i <= n; ++ i) {
        int x = rnd.next(0, M - 1);
        if (i == n)
            printf("%c\n", char ('a' + x));
        else
            printf("%c ", char ('a' + x));
    }
    return 0;
}