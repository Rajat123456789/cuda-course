#include<stdio.h>
#include<string.h>

struct football {
    char name[100];
    int jersey;
    int goals;
    char team[100];
};

int main() {
    int i, n;
    struct football f[100];
    
    printf("Enter number of players: ");
    scanf("%d", &n);
    
    printf("NAME\tJERSEY\tGOALS\tTEAM\n");
    
    for (i = 0; i < n; i++) {
        scanf("%s", f[i].name);
        scanf("%d", &f[i].jersey);
        scanf("%d", &f[i].goals);
        scanf("%s", f[i].team);
    }
    
    for (i = 0; i < n; i++) {
        printf("\t%s", f[i].name);
        printf("\t%d", f[i].jersey);
        printf("\t%d", f[i].goals);
        printf("\t%s\n", f[i].team);
    }
    
    return 0;
}
