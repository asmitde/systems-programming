echo "Enter the number of terms: "
read n
a=0
b=1
echo "Fibonacci sequence up to "$n" terms:"
if (($n == 1))
then
	echo $a
elif (($n == 2))
then
	echo $a
	echo $b
else
	echo $a
	echo $b
	for ((i=3; i<=$n; i++))
	do
		c=$(($a+$b))
		echo $c
		a=$b
		b=$c
	done
fi
