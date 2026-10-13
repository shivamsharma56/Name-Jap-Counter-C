#include <stdio.h>
#include <string.h>

int main() {
    printf("--- Custom Name Jap Counter in C ---\n\n");

    char name[50]; 

    
    printf("Aap kis naam ka Jap karna chahte hain? : ");
    
    
    fgets(name, sizeof(name), stdin);
    
    
    name[strcspn(name, "\n")] = 0;

    int count;
    printf("Kitni baar Jap karna chahte hain? : ");
    scanf("%d", &count);

    
    while (getchar() != '\n'); 

    printf("\n--- Jap Shuru Karein (Har Jap ke liye ENTER dabayein) ---\n\n");

    for (int i = 1; i <= count; i++) {
        getchar(); 
        printf("[%d/%d] %s", i, count, name);
        fflush(stdout); 
    }

    printf("\n\n--- Jap Poora Hua! Dhanyawad! ---\n");

    return 0;
}
