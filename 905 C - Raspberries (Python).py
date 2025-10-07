for _ in range(int(input())):
    n,k = map(int,input().split())
    array = list(map(int,input().split()))
    mult = [0]*k
    for i in array:
        if i%k ==0:
            mult[0]+=1
        else:
            mult[k-(i%k)]+=1
    if k==4:
        mult[0]+=mult[2]//2
        if mult[2]:
            mult[1]+=mult[3]
        mult[2]+=mult[3]//2
    for i in range(k):
        if(mult[i]):
            print(i)
            break