#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int arrival[n], burst[n], waiting[n], turnaround[n], completion[n];

    printf("Enter arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d %d", &arrival[i], &burst[i]);
    }

    // Sort by arrival time
    for (i = 0; i < n - 1; i++) {
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

    int completion_time = 0;
    for (i = 0; i < n; i++) {
        if (completion_time< arrival[i])
            completion_time = arrival[i];  // CPU idle until next arrival

        waiting[i] = completion_time - arrival[i];
        turnaround[i] = waiting[i] + burst[i];
        completion[i] = completion_time + burst[i];
        completion_time = completion[i];
    }

    printf("\nPID\tArrival\tBurst\tWaiting\tTurnaround\tCompletion\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t\t%d\n", i + 1, arrival[i], burst[i], waiting[i], turnaround[i], completion[i]);
    }

    return 0;
}
