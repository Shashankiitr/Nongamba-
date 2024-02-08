def reconstruct_string(n, trace):
    count = [0] * 26
    result = [''] * n

    for i in range(n):
        ai = trace[i]
        for j in range(26):
            if count[j] == ai:
                result[i] = chr(ord('a') + j)
                count[j] += 1
                break

    print(''.join(result))

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        trace = list(map(int, input().split()))
        reconstruct_string(n, trace)

if __name__ == "__main__":
    main()
