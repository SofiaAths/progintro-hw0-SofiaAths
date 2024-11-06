#include <stdio.h>
#include <stdlib.h>

int main() {
    long long left_cost, right_cost;

    while (1) {
        // Ζητείται από τον χρήστη για εισαγωγή
        printf("Please enter the cost of going left: ");
        
        // Εάν εντοπιστεί τέλος του αρχείου, εκτυπώνει 0
        if (scanf("%lld", &left_cost) == EOF) {
            return 0;
        }

        printf("Please enter the cost of going right: ");
        
        // Ελέγχει εάν παρέχεται σωστά το σωστό κόστος
        if (scanf("%lld", &right_cost) != 1) {
            fprintf(stderr, "No right cost provided.\n");
            return 1;  // Exit with code 1 if input is invalid
        }

        // Συγκρίνει για την εκτύπωση, αν θα πάει δεξιά ή αριστερά
        if (left_cost < right_cost) {
            printf("Go left.\n");
        } else if (right_cost < left_cost) {
            printf("Go right.\n");
        } else {
            printf("Go left.\n");  // Default to "Go left" if costs are equal
        }
    }

    return 0;
}

