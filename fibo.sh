echo "Enter the number:"
read n
arr=$arr[$n]
arr[0]=0
arr[1]=1
for((i=2;i<$n;i++))
do
	arr[$i]=$((${arr[$i-1]}+${arr[$i-2]}))
done
echo ${arr[*]}