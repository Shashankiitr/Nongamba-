def left(var, Y, N):
    if (var + Y) % N == 0:
        p = N
    else:
        p = (var + Y) % N
    return p

def right(var, Y, N):
    if (var + (N - Y)) % N == 0:
        q = N
    else:
        q = (var + (N - Y)) % N
    return q

def solve():
    N, M, X = map(int, input().split())
    s = {X}
    i = 0
    while i < M:
        Y, Z = input().split()
        Y = int(Y)
        temp = set()
        if Z == '0':
            for var in s:
                temp.add(left(var, Y, N))
        elif Z == '?':
            for var in s:
                temp.add(left(var, Y, N))
                temp.add(right(var, Y, N))
        elif Z == '1':
            for var in s:
                temp.add(right(var, Y, N))
        s = temp
        i += 1
    K = len(s)
    print(K)
    ans = sorted(list(s))
    print(*ans)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
