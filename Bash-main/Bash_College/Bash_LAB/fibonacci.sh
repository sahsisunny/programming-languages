read -p "Enter the Number : " num
a=0
b=1
i=0
echo "Fibonacci Series is : "
while [ $i -lt $num ]
do
    echo -n "$a "
    fn=$((a+b))
    a=$b
    b=$fn
    i=$((i+1))
done