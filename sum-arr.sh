echo "Enter the size of array:"
read size
echo "Enter the elements of the array:"
i=0
sum=0
while((i<$size))
do
	read arr[$i]
	sum=$(($sum+arr[$i]))
	i=$(($i+1))
done
echo $sum
