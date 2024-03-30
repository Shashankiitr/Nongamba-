def min_changes(s):
    n = len(s)
    ans = float('inf')

    for c in range(ord('a'), ord('z') + 1):
        c = chr(c)
        cnt = s.count(c)
        if cnt == 0:
            continue

        left, right = 0, cnt - 1
        extra_changes = sum(1 for i in range(left, right + 1) if s[i] != c)
        changes = extra_changes

        while right < n - 1:
            changes = min(changes, extra_changes)
            if s[left] != c:
                extra_changes -= 1
            left += 1
            right += 1
            if right < n and s[right] != c:
                extra_changes += 1

        ans = min(ans, changes)

    return ans

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        print(min_changes(s))
