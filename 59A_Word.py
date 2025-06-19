s = input()
lower=0 
upper=0

for c in s:
        if c.islower():
                lower+=1
        else:
                upper+=1

if upper<=lower:
        result=s.lower()
else:
        result=s.upper()

print(result)