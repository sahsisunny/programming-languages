BinToDec(){
    read -p "Enter the Decimal Number : " num
    bin=$(echo "obase=2;$num" | bc )
    echo "Binary of $num is $bin"
}
BinToDec