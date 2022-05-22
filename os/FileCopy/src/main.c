#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096
#define PATH_LENGTH 512

int main(int argc, char* argv[]) {
    char *sourcePath = (char*)malloc(PATH_LENGTH + 1);
    char *destinationPath = (char*)malloc(PATH_LENGTH + 1);

    if (argc == 1) {
        size_t size = PATH_LENGTH;
        ssize_t streamSize;
        printf("Source: ");
        streamSize = getline(&sourcePath, &size, stdin);
        sourcePath[streamSize - 1] = 0;
        printf("Destination: ");
        streamSize = getline(&destinationPath, &size, stdin);
        destinationPath[streamSize - 1] = 0;
    }
    else if (argc == 3) {
        strncpy(sourcePath, argv[1], PATH_LENGTH);
        strncpy(destinationPath, argv[2], PATH_LENGTH);
    }
    else {
        fprintf(stderr, "Usage:\n FileCopy [source destination]\n");
        free(sourcePath);
        free(destinationPath);
        return EXIT_FAILURE;
    }

    // Open files
    int sourceFile = open(sourcePath, O_RDONLY | O_CREAT);
    if (sourceFile == -1) {
        fprintf(stderr, "Cannot open file %s\n", sourcePath);
        free(sourcePath);
        free(destinationPath);
        return EXIT_FAILURE;
    }

    int destinationFile = open(destinationPath, O_WRONLY | O_CREAT,
            S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (destinationFile == -1) {
        fprintf(stderr, "Cannot copy file\n");
        free(sourcePath);
        free(destinationPath);
        return EXIT_FAILURE;
    }

    // Copy
    char buffer[BUFFER_SIZE];
    ssize_t readBytes = 0;
    
    while (readBytes = read(sourceFile, buffer, BUFFER_SIZE)) {
        write(destinationFile, buffer, readBytes);
    }

    // Close files
    close(sourceFile);
    close(destinationFile);
    free(sourcePath);
    free(destinationPath);

    return EXIT_SUCCESS;
}
