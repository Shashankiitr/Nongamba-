def solve():
    N = int(input())
    A = list(map(int, input().split()))
    sum_val = sum(A)
    M = sum_val // N
    B = 0
    for a in A:
        if a > M:
            B += (a - M)
        else:
            X = M - a
            B -= X
        if B < 0:
            print("NO")
            return
    print("YES")

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
