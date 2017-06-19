import math
str=raw_input();
i=int(str.split()[0]);
k=int(str.split()[1]);
s=int(str.split()[2]);

str=raw_input();
a_i=float(str.split()[0]);
b_i=float(str.split()[1]);

x=math.sqrt(2);
y=math.sqrt(3);

res=a_i+b_i;
if k!=i:
	tmp=(k-i);
	if tmp&1:
		tmp-=1;
		i+=1;
		s-=1;
		res=x*(a_i+(y*b_i));
	if k-i:
		res*=(pow(2,(2*tmp-s)));
else:
	res*=(pow(2,-s));
print res;