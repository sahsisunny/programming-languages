read -p "Enter the Number : " num
echo "Before Reverse : $num "
sd=0
rev=0
while [ $num -gt 0 ]
do
	sd=$(( $num%10 ))
	rev=$(( $rev*10+$sd ))
	num=$(( $num/10 ))
done
echo "After Reverse : $rev "

