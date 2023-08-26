#!/usr/bin/env python3

# F[n] = F[n-1] + F[n-2]
# Instead of thinking of this as shifting a buffer of size nback+1
# Think of it as sequentially updating the bins in the buffer size nback every nback cycles

def fibo_bufferupdate(count,nback):
    buf = [0] * nback
    buf[1] = 1

    logic=count #for count=0,1
    for i in range(2,count+1):
        logic = i % nback; #update this buffer
        for j in range(0,nback):
            if(j != logic):
                buf[logic] += buf[j]
    return buf[logic]

if __name__ == "__main__":
    nback=3
    count=[0,1,2,3,4,5,6,7,8,9,10]
    for i in count:
        print(f'fibo_bufferupdate({i},{nback})={fibo_bufferupdate(i,nback)}')
