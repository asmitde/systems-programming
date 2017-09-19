fibo()
{
	if (($1 == 1))
	then
		echo 0
	elif (($1 == 2))
	then
		echo 1
	fi
	a=$(fibo $(($1-1)))
	b=$(fibo $(($1-2)))
	c=$(($a+$b))
	echo $c
}
echo "Enter the value of n:"
read n
f=$(fibo $n)
echo $n"th term of Fibonacci sequence = "$f
