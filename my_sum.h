#include <stdio.h>
#include <assert.h>

int my_sum(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    assert(2==mysum(1, 1));
    assert(-2 ==mysum(-1, -1));
    assert(0 == my_sum(0,0));

    return(0);
}