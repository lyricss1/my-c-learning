#include <stdio.h>
#include <dirent.h>

int main() {
    DIR *dir;
    struct dirent *entry;
    int count = 0;
    dir = opendir(".");
    if (dir == NULL) {
        printf("NEMA\n");
        return 1;
    }
    printf("Files:\n\n");
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name); 
        count++;
    }
    closedir(dir);
    printf("\n NUM OF FILES: %d\n, count");
    return 0;
}