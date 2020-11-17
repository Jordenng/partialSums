#include <stdio.h>

int partialSums(int *input_array,size_t num){
    // receiving data from main function
    int array[num];
    for (int i=0; i<num;i++){ // initializing array
        array[i] = input_array[i];
    }

    int partial_sums_array[num]; // new array for new sums
    int partial_sum = 0;
    int i;

    for (i=0; i<num; i++){ // adding partial sum to ints
        partial_sums_array[i] = array[i] + partial_sum;
        partial_sum = partial_sum + array[i];
    }

    // printing new partial sums array
    printf("\nPartial Sums Result: ");
    for (i=0; i<num; i++){
        printf("%d ", partial_sums_array[i]);
    }
}
int main () {
    // receiving input of array size from client
    int num, i;
    printf("Please enter size of array: ");
    scanf("%d", &num);

    // receiving input of array numbers from client
    int input_array[num]; // initializing array with given array size
    printf("Please enter integers: ");
    for (i = 0; i < num ;i++) {
        scanf("%d ", &input_array[i]);
    }

    // printing client's given input
    printf("Your size input: ");
    printf("%d ", num);
    printf("\nYour array input: ");
    for (i = 0; i< num; i++){
        printf("%d ", input_array[i]);
    }

    partialSums(input_array, num); // sending data to function

}