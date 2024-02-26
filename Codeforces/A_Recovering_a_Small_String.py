def solve(n):
    if n <= 28:
        print("aa", end="")
        print(chr(ord('a') + n - 2 - 1))
    elif n > 28 and n <= 53:
        print("a", end="")
        print(chr(ord('a') + n - 27 - 1), end="")
        print("z")
    else:
        print(chr(ord('a') + n - 52 - 1), end="")
        print("zz")

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        solve(n)

if __name__ == "__main__":
    main()
