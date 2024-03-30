def check1(s, i):
    return s[i] == s[i + 1] or s[i] == '?' or s[i + 1] == '?'

def check2(s, j, i):
    return s[j] == s[j + i] or s[j] == '?' or s[j + i] == '?'

def longest_substr(s):
    n = len(s)
    A = 0
    i = 0

    while i < n - 1:
        if check1(s, i):
            A = 1
            break
        i += 1

    i = 2
    while i < n:
        Vec = []
        j = 0
        while j < n - i:
            if check2(s, j, i):
                Vec.append(j)
            j += 1
        Vec.sort()

        maxm = 1
        count = 1
        j = 1
        while j < len(Vec):
            if Vec[j] - 1 == Vec[j - 1]:
                count += 1
            else:
                maxm = max(maxm, count)
                count = 1
            j += 1
        maxm = max(maxm, count)
        A = max(A, i) if maxm >= i else A
        i += 1

    return 2 * A

def solve():
    s = input()
    result = longest_substr(s)
    print(result)

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        solve()
