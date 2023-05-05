read -p "Enter the Digits : " dig
num=$dig
s=0
while [ $dig -gt 0 ]
do
	k=$(( $dig%10 ))
	dig=$(( $dig/10 ))
	s=$(( $s+$k))
done
echo "Sum of Digits $num is : $s"
