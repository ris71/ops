#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int arrival[n], burst[n], completion[n], waiting[n], turnaround[n];

    // Input: Arrival time and Burst time
    printf("Enter Arrival Time and Burst Time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d %d", &arrival[i], &burst[i]);
    }

    // Sorting based on Arrival Time (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrival[j] > arrival[j + 1]) {
                // Swap arrival time
                int temp = arrival[j];
                arrival[j] = arrival[j + 1];
                arrival[j + 1] = temp;

                // Swap burst time
                temp = burst[j];
                burst[j] = burst[j + 1];
                burst[j + 1] = temp;
            }
        }
    }

    int time = 0; // Tracks CPU execution time

    // Calculate Completion, Turnaround, and Waiting times
    for (int i = 0; i < n; i++) {
        if (time < arrival[i]) {
            time = arrival[i]; // If CPU is idle, start when process arrives
        }
        completion[i] = time + burst[i]; // Completion Time
        turnaround[i] = completion[i] - arrival[i]; // Turnaround Time
        waiting[i] = turnaround[i] - burst[i]; // Waiting Time
        time = completion[i]; // Update CPU time
    }

    // Output Process Table
    printf("\nPID\tArrival\tBurst\tCompletion\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t\t%d\t%d\n", i + 1, arrival[i], burst[i], completion[i], waiting[i], turnaround[i]);
    }

    return 0;
}
