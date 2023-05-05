read -p "Enter the Number : " num
i=$(( $num%2 ))
if [ $i -eq 0 ]
then
	echo "$num is Even"
else
	echo "$num is Odd"
    $num=$(( $num+$num ))
fi	
echo $num