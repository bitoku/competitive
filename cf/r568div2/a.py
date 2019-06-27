def main():
    a, b, c, d = (int(x) for x in input().split())
    a, b, c = sorted([a, b, c])
    return max(d - (c - b), 0) + max(d - (b - a), 0)

print(main())