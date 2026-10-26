# EX NO 11 – LRU and LFU Page Replacement Algorithms

## Aim
To implement page replacement using LRU and LFU.

## Domain / Use Case
Supermarket billing system – a cache of 5 product IDs.

## Files
| File | Description |
|------|-------------|
| `ex11_partA_lru.c` | Part A – LRU-style cache using a circular queue |
| `ex11_partB_lfu.c` | Part B – LFU cache with frequency counts |
| `ex11_partA_output.png`, `ex11_partB_output.png` | Program outputs |

## Part A – LRU
Product IDs are read until 0 is entered. The cache holds 5 entries in a circular queue; when it is full, the oldest entry is evicted and printed.

```bash
gcc ex11_partA_lru.c -o lru
./lru
```
![LRU output](ex11_partA_output.png)

## Part B – LFU
Each cached product has a frequency counter that increases on every repeat access. When the cache is full, the product with the lowest frequency is evicted.

```bash
gcc ex11_partB_lfu.c -o lfu
./lfu
```
![LFU output](ex11_partB_output.png)

Input used for both outputs: `10 20 30 40 50 60 70 0`

## Definitions
- **LRU (Least Recently Used)** – on a page fault with full frames, the page not used for the longest time is replaced.
- **LFU (Least Frequently Used)** – the page used the fewest times is replaced, using a per-page frequency count.

## Result
Successfully implemented page replacement using LRU and LFU algorithms.
