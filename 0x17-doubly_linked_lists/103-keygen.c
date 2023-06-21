#include <stdio.h>
#include <string.h>

void generateKey(const char *username) {
    int len = strlen(username);
    int i;
    char key[len + 1];
    
    for (i = 0; i < len; i++) {
        key[i] = username[i] + i;
    }
    
    key[i] = '\0';
    
    printf("%s\n", key);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <username>\n", argv[0]);
        return 1;
    }
    
    generateKey(argv[1]);
    
    return 0;
}
