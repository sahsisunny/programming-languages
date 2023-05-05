input(){
  read -p "Enter the 1st Number : " num1
  read -p "Enter the 2nd Number : " num2
}
input
sum=`expr $num1 + $num2 `
echo $sum