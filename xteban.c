#include <stdio.h>
#include <string.h>

#define URL_VIDEO "http://www.youtube.com/watch?v=wC22UvgdKC8\n"
#define DAS_VERSIONEN_MAJOR "2"
#define DAS_VERSIONEN_MINOR "x"

signed long long int
print_das_versionen(void) {
    signed long long int useless_variable;

    useless_variable = 15;

    fprintf(stdout, "xteban program, version %s.%s\n",
            DAS_VERSIONEN_MAJOR, DAS_VERSIONEN_MINOR);

    return useless_variable;

}

int *t;

main() {
    int r;

    print_das_versionen();

    r = printf("%s", URL_VIDEO);

    if (r != strlen(URL_VIDEO))
        return 1;

    return *t;

}

