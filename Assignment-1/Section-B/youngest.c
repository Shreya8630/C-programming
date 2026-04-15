#include <stdio.h>
void youngest(int r, int s, int a) {
    if (r <= s && r <= a){
        printf("Youngest: R, Age = %d\n", r);
    }
    else if (s <= r && s <= a){
        printf("Youngest: S, Age = %d\n", s);
    }
    else{
        printf("Youngest: A, Age = %d\n", a);
    }
}
int main() {//Shreya2025217422
    int lavanya, asmit, shreya;
    printf("Enter age of Lavanya, Asmit and Shreya: ");
    scanf("%d %d %d", &lavanya, &asmit, &shreya);
    youngest(lavanya, asmit, shreya);
    return 0;
}
