echo "Enter a string: "
read s
l=${#s}
i=$l
while (($i>=1))
do
	i=$(($i-1))
	rs=$rs${s:$i:1}
done
echo "Reverse string: "$rs
