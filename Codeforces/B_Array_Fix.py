def first(n):
    return n // 10

def second(n):
    return n % 10

def solve():
    n = int(input())
    A = list(map(int, input().split()))
    V = []
    a = first(A[0])
    b = second(A[0])
    if b >= a:
        V.append(a)
        V.append(b)
    else:
        V.append(A[0])
    flag = False
    for i in range(1, n):
        m = first(A[i])
        s = second(A[i])
        if m >= V[-1] and s >= m:
            V.append(m)
            V.append(s)
        else:
            if A[i] >= V[-1]:
                V.append(A[i])
            else:
                flag = True
                break
    print("NO" if flag else "YES")

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
