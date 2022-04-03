#include <stdio.h>

void read_menu(FILE *fPtr_menu, int * c1, double *p1, int *c2, double *p2, int *c3, double *p3);

int main() {

    FILE *fPtr_menu;
    int c1, c2, c3;
    double p1, p2, p3;

    fPtr_menu = fopen("Menu.txt", "r");
    read_menu(fPtr_menu, &c1, &p1, &c2, &p2, &c3, &p3);

    printf("1.Calorie is %d - Price is %lf \n", c1, p1);

    return 0;
}

void read_menu(FILE *fPtr_menu, int * c1, double *p1, int *c2, double *p2, int *c3, double *p3) {
    fscanf(fPtr_menu, "%d", c1);
    fscanf(fPtr_menu, "%lf", p1);
    fscanf(fPtr_menu, "%d", c2);
    fscanf(fPtr_menu, "%lf", p2);
    fscanf(fPtr_menu, "%d", c3);
    fscanf(fPtr_menu, "%lf", p3);
}