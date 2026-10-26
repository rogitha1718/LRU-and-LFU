/*
 * EX NO 11 - Part A: LRU-style cache (circular queue) - supermarket billing
 * When the cache (size 5) is full, the oldest entry is evicted.
 * Compile: gcc ex11_partA_lru.c -o lru
 * Run    : ./lru   (enter product IDs, 0 to stop)
 */
#include <stdio.h>
#define N 5

int cache[N], front = 0, rear = -1, count = 0;

void insert(int x) {
    if (count == N) {
        printf("Evict %d\n", cache[front]);
        front = (front + 1) % N;
        count--;
    }
    rear = (rear + 1) % N;
    cache[rear] = x;
    count++;
}

void display() {
    for (int i = 0, j = front; i < count; i++, j = (j + 1) % N)
        printf("%d ", cache[j]);
    printf("\n");
}

int main() {
    int x;
    printf("Enter product IDs (0 to stop):\n");
    while (scanf("%d", &x) == 1 && x != 0) insert(x);
    display();
    return 0;
}
