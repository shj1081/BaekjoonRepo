N, M = map(int,input().split())
onTable = list(map(int,input().split()))
result = 0

for i in range(N):
    for j in range(i+1,N):
        for k in range(j+1,N):
            if (onTable[i] + onTable[j]+onTable[k] > M):
                continue
            result = max(result,onTable[i] + onTable[j] + onTable[k])
            
print(result)