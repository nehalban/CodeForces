for _ in range(int(input())):
    a,b = map(lambda x: abs(int(x)), input().split())
    kx,ky = map(int, input().split())
    qx,qy = map(int, input().split())
    
    places = set()
    count = 0

    for i in (a, -a):
        for j in (b, -b):
            places.add((kx+i, ky+j))
            places.add((kx+j, ky+i))
    for pr in places:
        if {abs(pr[0]-qx), abs(pr[1]-qy)} == {a,b}|{b,a}:
            count+=1
    print(count)