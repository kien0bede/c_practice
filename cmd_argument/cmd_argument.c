#include <stdio.h>

int main(int argc, char *argv[]) {
    int numberOfArguments = argc;
    char *firstArgument = argv[0]; // Tên chương trình được chạy
    char *secondArgument = argv[1]; // Đối số dòng lệnh đầu tiên (nếu có)

    printf("Number of arguments: %d\n", numberOfArguments);
    printf("First argument (program name): %s\n", firstArgument);
    printf("Second argument (command line argument): %s\n", secondArgument);
    return 0;
}