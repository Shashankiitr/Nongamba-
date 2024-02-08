from collections import deque

MOD = 1000000007
INF = float('inf')

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    cons = []
    pos = set()
    for i in range(1, n):
        if arr[i] != arr[i - 1]:
            pos.add(i + 1)
    q = int(input())
    for _ in range(q):
        l, r = map(int, input().split())
        itr = next((x for x in pos if x <= r), None)
        if itr is None or itr < l:
            print(-1, -1)
        else:
            print(itr - 1, itr)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
        print()
