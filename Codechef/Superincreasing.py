def is_valid_superincreasing_array(N, K, X):
    A = [0] * N
    A[K - 1] = X  # Setting the value X at index K

    # Filling the array with valid superincreasing values
    for i in range(K - 1, 0, -1):
        A[i - 1] = A[i] // 2
        if A[i - 1] <= 0:  # If the condition fails
            return False
    return True

def main():
    T = int(input())

    for _ in range(T):
        N, K, X = map(int, input().split())

        if is_valid_superincreasing_array(N, K, X):
            print("Yes")
        else:
            print("No")

if __name__ == "__main__":
    main()
