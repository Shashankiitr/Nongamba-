def find_first_subsequence(a, n):
    M = {}
    for num in a:
        if num in M:
            M[num] += 1
        else:
            M[num] = 1
    
    index = 0
    duplicates = set()
    missing = set()
    k = True
    
    while M.get(index, 0) >= 2 and k:
        duplicates.add(index)
        missing.add(index)
        index += 1
        k = False
    
    if M.get(index, 0) <= 0:
        r = 0
        i = 0
        
        while i < n:
            if a[i] in duplicates:
                duplicates.remove(a[i])
            if not duplicates:
                r = i + 1
                break
            else:
                i += 1
        
        i = r
        while i < n:
            if a[i] in missing:
                missing.remove(a[i])
            i += 1
        
        if not missing:
            print(2)
            print(1, r)
            print(r + 1, n)
        else:
            print(-1)
    else:
        print(-1)

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        find_first_subsequence(a, n)

if __name__ == "__main__":
    main()
