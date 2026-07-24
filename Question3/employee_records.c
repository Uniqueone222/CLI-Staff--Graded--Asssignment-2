#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct Employee {
    int id;
    char name[30];
};

int main() {
    int fd;
    struct Employee emp;

    fd = open("employee.dat", O_RDWR | O_CREAT, 0644);

    emp.id = 1;
    strcpy(emp.name, "Alice");
    write(fd, &emp, sizeof(emp));

    emp.id = 2;
    strcpy(emp.name, "Bob");
    write(fd, &emp, sizeof(emp));

    lseek(fd, sizeof(struct Employee), SEEK_SET);

    emp.id = 2;
    strcpy(emp.name, "Robert");
    write(fd, &emp, sizeof(emp));

    lseek(fd, 0, SEEK_SET);

    while(read(fd, &emp, sizeof(emp)) > 0) {
        printf("%d %s\n", emp.id, emp.name);
    }

    close(fd);

    return 0;
}
