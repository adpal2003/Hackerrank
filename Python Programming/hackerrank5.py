n=int(input("enter how many student:"))  
grade=[]
res=[]
for i in range(n):
    name=input("enter name:")
    marks=float(input("enter marks:"))
    res.append([name,marks])
    grade.append(marks)
print(res)
print(grade)
grade=sorted(set(grade))
print(grade)
m=grade[1]
print(m)
name=[]
for val in res:
    if m==val[1]:
        name.append(val[0])
print(name)        
name.sort()
print(name)
for nm in name:
    print(nm)    













