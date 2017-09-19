echo "Enter number of elements: "
read n
for ((i=0; i<$n; i++))
do
	echo "Enter #"$i": "
	read arr[$i]
done
sum=0
for ((i=0; i<$n; i++))
do 
	sum=$(($sum+$((arr[$i]))))
done
echo "Sum = "$sum
