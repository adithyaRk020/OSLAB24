#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void fcfs(int arr[], int head) {
    int seek_count = 0;
    int distance, cur_track;

    for (int i = 0; i < SIZE; i++) {
        cur_track = arr[i];

        distance = abs(cur_track - head);

        seek_count += distance;

        head = cur_track;
    }

    printf("Total number of seek operations FCFS: %d\n", seek_count);
}

void scan(int arr[], int head, char direction) {
    int seek_count = 0;
    int distance, cur_track;
    int left = head - 0;
    int right = 199 - head;

    for (int i = 0; i < SIZE; i++) {
        cur_track = arr[i];

        if (cur_track >= head && direction == 'l') {
            direction = 'r';
            printf("\tMove from %d to %d direction: %c", head, cur_track, direction);

            distance = abs(cur_track - head);
            seek_count += distance;

            head = cur_track;
        }
        if (cur_track <= head && direction == 'r') {
            C while So  First Are MainAxisAlignment.setViewportView gridBagConstraints So
