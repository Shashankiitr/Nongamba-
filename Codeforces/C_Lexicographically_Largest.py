t = int(input())
for _ in range(t):
    n = int(input())
    cnt = {}

    # Split the input line into separate integers
    a_list = map(int, input().split())

    for i, a in enumerate(a_list, start=1):
        cnt[a + i] = cnt.get(a + i, 0) + 1

    i = 1
    while i <= n:
        x, c = max(cnt.items())
        print(x, end=" ")
        if c > 1:
            cnt[x - 1] = cnt.get(x - 1, 0) + c - 1
        i += 1
        del cnt[x]

    print()
