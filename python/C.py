
n = int(input())
#print(n)
ans = 0
while(n>0):
    str = input()
    name, ap = str.split(" ")

    if((name[0]=='M') and (ap[0]=='J')):
        ans += 1
    n -= 1

print(ans)