def solve():
    N = int(input())
    A = list(map(int, input().split()))
    if A[0] == A[N - 1]:
        j = 0
        while j < N and A[j] == A[0]:
            j += 1
        if j == N:
            print(0)
            return
        k = N - 1
        while k >= 0 and A[k] == A[N - 1]:
            k -= 1
        print(k - j + 1)
    else:
        j = 0
        while j < N and A[j] == A[0]:
            j += 1
        k = N - 1
        while k >= 0 and A[k] == A[N - 1]:
            k -= 1
        print(min(N - 1 - j + 1, k - 0 + 1))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
