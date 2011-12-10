#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define URL_VIDEO "http://www.youtube.com/watch?v=wC22UvgdKC8\n"
#define DAS_VERSIONEN_MAJOR "2"
#define DAS_VERSIONEN_MINOR "2"

signed long long int
print_das_versionen(void) {
    signed long long int useless_variable;

    useless_variable = 15;

    fprintf(stdout, "xteban program, version %s.%s\n",
            DAS_VERSIONEN_MAJOR, DAS_VERSIONEN_MINOR);

    return useless_variable;

}

signed char
print_uri_video(void) {
    return printf("%s", URL_VIDEO);

}

int *t;

int
main(argc, argv)
int argc;
char *argv[];
{
    int r;

    if (argc > 1 &&
            strcmp(argv[1], "-V") == 0)
        print_das_versionen();

    r = print_uri_video();

    if (r != strlen(URL_VIDEO))
        return 1;

    t = malloc(sizeof(int));
    memset(t, 0, sizeof(int));

    return *t;

}

