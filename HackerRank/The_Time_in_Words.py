'''
HackerRank: The Time in Words
Learning: Math
Description: Given the time in numerals we may convert it into words, as shown below:
    5:00 five o' clock
    5:01 one minute past five
    5:10 ten minutes past five
    5:15 quarter past five
    5:30 half past five
    5:40 → twenty minutes to six
    5:45 quarter to six
    5:47 thirteen minutes to six
    5:28 twenty eight minutes past five
'''
h = int(input())
m = int(input())

def t(n):
    h = ['one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'quarter', 'sixteen', 'seventeen', 'eighteen', 'nineteen', 'twenty', 'twenty one', 'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six', 'twenty seven', 'twenty eight', 'twenty nine', 'half']
    if n <= 30:
        return h[n-1]
    else:
        return h[60-n-1]

if m == 0:
    time = f"{t(h) + " o' clock"}"
elif m == 1:
    time = f"{t(m) + ' minute' + ' past ' +  t(h)}"
elif m == 15 or m == 30:
    time = f"{t(m) + ' past ' +  t(h)}"
elif m <30 and m > 1 and not m == 15:
    time = f"{t(m) + ' minutes' + ' past ' +  t(h)}"
elif m == 45:
    time = f"{t(m) + ' to ' +  t(h+1)}"
elif m == 59: 
    time = f"{t(m) + ' minute' + ' to ' +  t(h+1)}"
elif m > 30 and m < 59 and not m == 45: 
    time = f"{t(m) + ' minutes' +' to ' +  t(h+1)}"

print(time)