#!/usr/bin/env python3

#I	1
#V	5
#X	10
#L	50
#C	100
#D	500
#M	1000

def int2rom(count):
    num = [  1,    4,   5,    9,  10,   40,  50,   90,100, 400, 500, 900,1000]
    rom = ['I', 'IV', 'V', 'IX', 'X', 'XL', 'L', 'XC','C','CD', 'D','CM', 'M']
    
    i=len(num)-1
    str=''
    
    while count:
        
        div = count//num[i]
        count %= num[i]
        
        str+=rom[i]*div
        
        i-=1
    return str
        
if __name__ == "__main__":
    
    count=3549
    str = int2rom(count)
    print(f'count={count} roman={str}')
