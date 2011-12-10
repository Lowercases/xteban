#include <stdio.h>
#include <string.h>

#define URL_VIDEO "http://www.youtube.com/watch?v=wC22UvgdKC8\n"

int *t;

main() {
    int r;

    r = printf("%s", URL_VIDEO);

    if (r != strlen(URL_VIDEO))
        return 1;

    return *t;

}

