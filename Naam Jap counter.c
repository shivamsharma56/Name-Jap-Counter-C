#include <stdio.h>
#include <string.h>

int main() {
    printf("--- Custom Name Jap Counter in C ---\n\n");

    char name[50]; // Ab koi bhi naam store ho sakta hai (up to 50 characters)

    // User se custom name lena
    printf("Aap kis naam ka Jap karna chahte hain? : ");
    
    // fgets se space wale naam bhi support hote hain (Jaise: "Sita Ram")
    fgets(name, sizeof(name), stdin);
    
    // fgets se aane wale extra newline ('\n') ko hatane ke liye
    name[strcspn(name, "\n")] = 0;

    int count;
    printf("Kitni baar Jap karna chahte hain? : ");
    scanf("%d", &count);

    // Buffer Clear karna (pichle scanf ka Enter clean karne ke liye)
    while (getchar() != '\n'); 

    printf("\n--- Jap Shuru Karein (Har Jap ke liye ENTER dabayein) ---\n\n");

    for (int i = 1; i <= count; i++) {
        getchar(); // User ke Enter press karne ka wait karega
        printf("[%d/%d] %s", i, count, name);
        fflush(stdout); // Text ko turant screen par dikhane ke liye
    }

    printf("\n\n--- Jap Poora Hua! Dhanyawad! ---\n");

    return 0;
}