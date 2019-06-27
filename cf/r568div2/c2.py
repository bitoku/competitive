from collections import Counter

def each(total, M, ocounter, student):
    counter = ocounter.copy()
    cnt = 0
    while total > M:
        m = max(counter)
        total -= m
        counter[m] -= 1
        if counter[m] <= 0:
            del counter[m]
        cnt += 1
    else:
        return(cnt)

def main():
    n, M = [int(x) for x in input().split()]
    students = [int(x) for x in input().split()]
    counter = Counter()
    result = []
    total = 0
    cnt = 0
    for student in students:
        total += student
        result.append(each(total, M, counter, student))
        counter[student] += 1
    print(" ".join([str(x) for x in result]))

main()



