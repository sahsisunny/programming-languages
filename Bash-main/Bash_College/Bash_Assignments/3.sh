#!/bin/bash
clear

#Write a script to input the employee ID , name and employee salary. Calculate the DA 50% of basic salary, 20% HRA of basic salary, also evaluate the salary of a employee.


read -p "Enter the Employee ID : " empid
read -p "Enter the Employee Name : " empname
read -p "Enter the Employee Basic Salary : " empsalary

DA=$(echo "scale=2; $empsalary/2" | bc)

HRA=$(echo "scale=2; $empsalary/5" | bc)

echo "Employee ID : $empid"
echo "Employee Name : $empname"
GSALARY=$(echo "scale=2; $empsalary+$DA+$HRA" | bc)
echo "Employee Gross Salary : $GSALARY"

