def safe_input():
    while True:
        try:
            return int(input())
        except ValueError:
            print("Invalid input. Please enter an integer.")

def print_query(row, col):
    print("? {} {}".format(row, col))

def print_answer(row, col):
    print("! {} {}".format(row, col), end='')

def solve():
    num_rows, num_cols = map(int, input().split())

    A = [0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 1]
    
    X = 0
    for i, x in enumerate(A):
        if x > num_rows:
            X = i
            break

    Y = num_rows - A[X - 1]

    print_query(1, 1)
    top_left = safe_input() + 2

    print_query(num_rows, 1)
    top_right = safe_input()
    top_right -= (num_rows - 1)
    top_right = -top_right

    x = (top_left + top_right) // 2
    y = top_left - x

    if 1 <= x <= num_rows and 1 <= y <= num_cols:
        print_query(x, y)
        middle = safe_input()
        if middle == 0:
            print_answer(x, y)
        else:
            print_query(num_rows, num_cols)
            bottom_right = safe_input()
            bottom_right -= (num_rows + num_cols)
            bottom_right = -bottom_right
            top_left = bottom_right
            x = (top_left + top_right) // 2
            y = top_left - x
            print_answer(x, y)
    else:
        print_query(num_rows, num_cols)
        bottom_right = safe_input()
        bottom_right -= (num_rows + num_cols)
        bottom_right = -bottom_right
        top_left = bottom_right
        x = (top_left + top_right) // 2
        y = top_left - x
        print_answer(x, y)

if __name__ == "__main__":
    num_test_cases = safe_input()
    for _ in range(num_test_cases):
        solve()
        print()
