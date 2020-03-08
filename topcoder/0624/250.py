class EvilCakeCutter:
    def __init__(self):
        pass

    def successProbability(self, w, h, w1, h1):
        if w1 <= w / 3 or h1 <= h / 3:
            return 1.0
        if w1 > w / 2 and h1 > h / 2:
            return 0.0

        return 1 - (w1 / (w-w1)) * (h1 / (h-h1))

c = EvilCakeCutter()

print(c.successProbability(8, 5, 3, 2))