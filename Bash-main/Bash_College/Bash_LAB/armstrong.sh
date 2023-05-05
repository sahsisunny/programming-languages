read -p "Enter the Number : " num
ams(){
	t=$num
	s=0
	b=0
	c=10
	while [ $num -gt $b ]
	do
		s=$(( num % c ))
		i=$(( s * s * s ))
		s=$(( s + i ))
		n=$(( n / c ))
	done
	echo $s
	if [ $s -e $t]
	then
		echo "Armstrong Number"
	else
		echo "Not an Armstrong Number"
	fi
}
result=`ams $num`
echo $result


