for _ in range(int(input())):
    s=input()
    n=len(s)
    zero = s.count('0')
    one = s.count('1')
    if zero==one:
        n-=1
    for i in s:
        if zero+1 and one+1:
            match i:
                case '1':
                    zero-=1
                case '0':
                    one-=1
            n-=1
        else:
            break
    # if not(zero+1 and one+1):
    #     n+=1
    print(n+1)