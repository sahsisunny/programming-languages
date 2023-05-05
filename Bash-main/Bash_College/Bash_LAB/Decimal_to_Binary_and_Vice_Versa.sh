DecToBin(){
    read -p "Enter the Decimal Number : " num
    bin=$(echo "obase=2;$num" | bc )
    echo "Binary of $num is $bin"
}
BinToDec(){
    read -p "Enter the Decimal Number : " num
    bin=$(echo "obase=10; ibase=2;$num" | bc )
    echo "Binary of $num is $bin"
}

echo "1. Decimal to Binary"
echo "2. Binary to Decimal"

read -p "Enter the number : " op
case $op in
    1)
        DecToBin
        ;;
    2)
        BinToDec
        ;;
    *)
        echo "Plsease enter the valid number!!"
        ;;
esac