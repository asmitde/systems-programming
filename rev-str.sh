echo "Enter a string:"
read s
l=${#s}
rs=""
while [ $l -ge 1 ]
do
	l=$(($l-1))
	rs=$rs${s:$l:1}
done
echo "Reverse string:"$rs
