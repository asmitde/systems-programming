echo "Enter number1:"
read n1
echo "Enter number2:"
read n2
echo "Enter number3:"
read n3
if [ $n1 -gt $n2 ] && [ $n1 -gt $n3 ]; then
	max=$n1
elif [ $n2 -gt $n3 ]; then
	max=$n2
else
	max=$n3
fi
echo "Largest number:"$max

