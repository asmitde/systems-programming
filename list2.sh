touch file_one
rm -f file_two

if [ -f file_one ] && echo "Hello" && [ -f file_two ] && echo "There"
then 
	echo "in if"
else 
	echo "in else"
fi
exit 0
