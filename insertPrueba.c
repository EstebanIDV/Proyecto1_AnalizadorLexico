//
// Created by david on 15/05/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define PATH_MAX 500
char path[PATH_MAX];
int bufferchar;

void buffer_char_include(int c){
    if (strlen(path)<500)
        path[strlen(path)] = c;
    else{
        printf("ERROR! An ID or expression exceeds length limits!\n");
        exit(1);
    }
};

int main(int argc, char **argv){
    FILE *fd;
    fd = popen("echo | gcc -Wp,-v -x c - -fsyntax-only", "r");
    if (!fd) return 1;

    char   buffer[256];
    size_t chread;
    /* String to store entire command contents in */
    size_t comalloc = 256;
    size_t comlen   = 0;
    char  *comout   = malloc(comalloc);

    /* Use fread so binary data is dealt with correctly */
    while ((chread = fread(buffer, 1, sizeof(buffer), fd)) != 0) {
        if (comlen + chread >= comalloc) {
            comalloc *= 2;
            comout = realloc(comout, comalloc);
        }
        memmove(comout + comlen, buffer, chread);
        comlen += chread;
    }

    /* We can now work with the output as we please. Just print
     * out to confirm output is as expected */
    //fwrite(comout, 1, comlen, stdout);
    free(comout);
    pclose(fd);
    return 0;
}