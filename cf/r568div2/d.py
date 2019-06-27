from collections import Counter

def check(b):
    diff_prog = [b[i] - b[i-1] for i in range(1, len(b))]
    return len(set(diff_prog)) == 1

def main():
    n = int(input())
    original_b = [int(x) for x in input().split()]
    b = sorted(original_b)
    if check(b):
        return original_b.index(b[0])+1
    if check(b[1:]):
        return original_b.index(b[0])+1
    if check(b[:1]+b[2:]):
        return original_b.index(b[1])+1
    c = b[1] - b[0]
    index = 0
    for i in range(1, len(b)):
        if b[i] - b[i-1] != c:
            index = i
            break
    if check(b[:index]+b[index+1:]):
        return original_b.index(b[index])+1
    return -1

print(main())
