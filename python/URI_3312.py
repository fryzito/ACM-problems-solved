
def init():
    MAXN = 100005
    is_prime = [True] * MAXN
    is_prime[0] = is_prime[1] = False
    for i,val in enumerate(is_prime):
        if val :
            j = 2
            while(j*i<MAXN):
                is_prime[i*j] = False
                j += 1
    return is_prime


def factorial(m):
    ans = 1
    j = 2
    while(j<=m):
        ans *= j
        j += 1
    return ans


def main():
    is_prime = init()
    n = input()
    arr = list(map(int,input().split(' ')))
    for val in arr:
        if is_prime[val]:
            print("{}! = {}".format(val,factorial(val)))

    return

if __name__ == '__main__':
    main()