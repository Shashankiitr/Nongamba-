def solve():
    n, k = map(int, input().split())
    s = input()
    o = s.count('1')
    i = 0
    ki = k
    ans = ""
    ans2 = ""
    if o <= k:
        for i in range(n):
            if s[i] == '0':
                ans += s[i]
            elif s[i] == '1':
                ki -= 1
        ans = ans[:-ki]
        print(ans)
    else:
        for i in range(n):
            if s[i] == '0':
                ans += s[i]
            elif s[i] == '1':
                if ki <= 0:
                    ans += s[i]
                ki -= 1
        i = 0
        ki = k
        for i in range(n):
            if s[i] == '0':
                ans2 += s[i]
            elif s[i] == '1':
                if ki > 0:
                    ans2 += '0'
                else:
                    ans2 += '1'
                ki -= 1
        print(min(ans, ans2))


t = int(input())
for _ in range(t):
    solve()
