#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {

    registerGen(argc, argv, 1);

    int N = atoi(argv[1]);
    int x = rnd.next(0, 100);
    if (x % 2 == 0)
        printf("%c\n", char ('a' + N));
    else
        printf("%c\n", char ('A' + N));
    return 0;
}