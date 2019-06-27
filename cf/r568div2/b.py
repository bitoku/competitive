import re
def pack(string):
    packed = []
    current = string[0]
    cnt = 0
    for c in string:
        if c == current:
            cnt += 1
        else:
            packed.append((current, cnt))
            current = c
            cnt = 1
    else:
        packed.append((current, cnt))
    return packed

def check(packed_a, packed_b):
    if len(packed_a) != len(packed_b):
        return False
    for a, b in zip(packed_a, packed_b):
        if a[0] != b[0] or a[1] > b[1]:
            return False
    return True

def main():
    n = int(input())
    for loop in range(n):
        original = input()
        test_case = input()
        packed_original = pack(original)
        packed_test = pack(test_case)
        if check(packed_original, packed_test):
            print("YES")
        else:
            print("NO")




main()
