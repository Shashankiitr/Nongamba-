class TestScenario:
    def __init__(self, x, y, z, w):
        self.x = x
        self.y = y
        self.z = z
        self.w = w

    def resolve(self):
        w = self.w[:]
        w.sort()
        p, q = [], []
        for r in range(self.y):
            s = w[r]
            t = w[(r + 1) % self.y]
            u = (t - s + self.x) % self.x
            if u >= 3:
                v = u - 1
                if v & 1:
                    p.append(v)
                else:
                    q.append(v)
        p.sort()
        m = self.x
        for n in p:
            if self.z >= n // 2:
                self.z -= n // 2
                n = 0
            else:
                o = min(self.z, n // 2)
                n -= 2 * o
                self.z -= o
                m -= n
        for n in q:
            o = min(self.z, n // 2)
            n -= 2 * o
            self.z -= o
            m -= n
        return m - 2


def main():
    test_cases = int(input())
    for case_num in range(1, test_cases + 1):
        x, y, z = map(int, input().split())
        w = [int(e) - 1 for e in input().split()]
        test_scenario = TestScenario(x, y, z, w)
        result = test_scenario.resolve()
        print(result)


if __name__ == "__main__":
    main()
