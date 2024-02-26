def solve():
    N, K = map(int, input().split())
    ones = 2
    twos = 2 * N - 2
    total = 2 + 2 * twos
    if K == total:
        print(ones + twos)
    else:
        if K & 1:
            ans = (K - 1) // 2
            print(ans + 1)
        else:
            print(K // 2)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
