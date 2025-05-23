# Hacker Rank Mid range problem

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