from collections import deque

n, q = list(map(int, input().split()))
array = list(map(int, input().split()))
queries = []
for loop in range(q):
    queries.append(int(input()))

results = {}

deq = deque(array)

max_v = max(deq)

cnt = 0
while deq[0] != max_v:
    cnt += 1
    a = deq.popleft()
    b = deq.popleft()
    results[cnt] = (a, b)
    if a > b:
        deq.appendleft(a)
        deq.append(b)
    else:
        deq.appendleft(b)
        deq.append(a)
cnt += 1

for query in queries:
    if query in results:
        print(results[query][0], results[query][1])
    else:
        idx = (query - cnt) % (len(deq) - 1) + 1
        print(max_v, deq[idx])
