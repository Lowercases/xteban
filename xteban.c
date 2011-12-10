#include <stdio.h>

#define URL_VIDEO "http://www.youtube.com/watch?v=wC22UvgdKC8\n"
#define DAS_VERSIONEN_MAJOR "1"
#define DAS_VERSIONEN_MINOR "1"

signed long long int
print_das_versionen(void) {
    signed long long int useless_variable;

    useless_variable = 15;

    fprintf(stdout, "xteban program, version %s.%s\n",
            DAS_VERSIONEN_MAJOR, DAS_VERSIONEN_MINOR);

    return useless_variable;

}

main() {
    print_das_versionen();

    printf("%s", URL_VIDEO);

    return 0;

}

