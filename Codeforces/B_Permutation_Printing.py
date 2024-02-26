def solve():
    N = int(input())
    if N == 1:
        print(1)
        return

    if N % 2:
        A, B = [], []
        for i in range(1, N+1):
            if i <= N//2 + 1:
                A.append(i)
            else:
                B.append(i)
        B.reverse()
        for i in range(N//2):
            print(A[i], B[i], end=" ")
        print(A[N//2])
    else:
        A, B = [], []
        for i in range(1, N+1):
            if i <= N//2:
                A.append(i)
            else:
                B.append(i)
        B.reverse()
        for i in range(N//2):
            print(A[i], B[i], end=" ")
        print()

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
