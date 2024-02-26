def first_set(V):
    if V == 0:
        return 1
    else:
        return V

def print_result(ans, A):
    if ans > A:
        print("YES")
    else:
        print("NO")

def solve():
    K, X, A = map(int, input().split())
    first = 0
    flag = 1
    i = 0

    while i < X:
        if flag:
            V = (first + K - 1) // (K - 1)
            first += first_set(V)
            if first <= A:
                flag = 1
            else:
                flag = 0
        else:
            break
        i += 1
    
    ans = K * (A - first)
    print_result(ans, A)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
