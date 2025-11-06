
/*
STEPHEN NDUNGU
REG NO :CT101/G/26448/25
*/
#include <stdio.h>
#include <stdlib.h>

void writeInputFile() {
    FILE *f = fopen("input.txt", "w");
    if (f == NULL) {
        printf("Error opening input.txt for writing.\n");
        return;
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(f, "%d\n", num);
    }

    fclose(f);
}

void processAndWriteOutput() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    int num, sum = 0, count = 0;
    while (fscanf(in, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    float avg = (count != 0) ? (float)sum / count : 0;
    fprintf(out, "Sum = %d\nAverage = %.2f\n", sum, avg);

    fclose(in);
    fclose(out);
}

void displayFiles() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "r");

    if (in == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    int num;
    printf("\nContents of input.txt:\n");
    while (fscanf(in, "%d", &num) == 1) {
        printf("%d ", num);
    }

    char line[100];printf("\n\nContents of output.txt:\n");
    while (fgets(line, sizeof(line), out)) {
        printf("%s", line);
    }

    fclose(in);
    fclose(out);
}

int main() {
    writeInputFile();
    processAndWriteOutput();
    displayFiles();
    return 0;
}
