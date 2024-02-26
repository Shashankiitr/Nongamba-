def process_test_case():
    num_cases = int(input())

    t = 0
    while t < num_cases:
        size, divisor1, divisor2 = map(int, input().split())
        elements = list(map(int, input().split()))
        
        counts = {}
        pairs = 0
        
        i = 0
        while i < size:
            remainder_x = elements[i] % divisor1
            remainder_y = elements[i] % divisor2
            complement = (divisor1 - remainder_x, remainder_y)
            
            pairs += counts.get(complement, 0)
            
            if remainder_x == 0:
                remainder_x = divisor1
            
            counts[(remainder_x, remainder_y)] = counts.get((remainder_x, remainder_y), 0) + 1
            i += 1
        
        print(pairs)
        t += 1

if __name__ == "__main__":
    process_test_case()
