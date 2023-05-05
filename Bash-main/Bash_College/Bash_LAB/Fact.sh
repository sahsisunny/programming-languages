read -p "Enter the Number : " num
N=$num
fact=1
while [ $num -gt 1 ]
do
	fact=$(( fact*num ))
	num=$(( $num-1 ))
done
echo "Factorial of $N is : $fact"
