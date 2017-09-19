if [ -f this_file ]; then
	if [ -f that_file ]; then
		if [ -f the_other_file ];then
			echo "All files are present,and correctly"
		fi
	fi
else
	echo "There is no such file."
fi
