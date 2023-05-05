#!/bin/bash
clear

#Main Menu Function
# 1. College Lab - Python
CLP(){
	echo "Prepare for College Lab - Python Prctical...."
	sleep 1
	echo "Opening PyCharm IDE......"
	sleep 2
	/usr/share/pycharm-community-2021.2/bin/pycharm.sh -r /home/kali/Documents/GitHub/Python_LAB/
}
#2. College Lab - Bash Script
CLB(){
	echo "Prepare for College Lab - Bash Script Prctical...."
	sleep 1
	echo "Opening Visual Studio ......"
	sleep 2
	code -r /home/kali/Documents/GitHub/Bash_LAB/
}
#3. Hacking Practice
HP(){
	echo "Please setup the 'Hacking Practice' Task"
	sleep 1
	echo "Exiting..........."
	sleep 2
	exit
}
#4. Python Practice
PP(){
	echo "Prepare for Python Prctical...."
	sleep 1
	echo  -e "\t╔================================╗"
	echo  -e "\t||1. Python Practice - LAB\t||"
	echo  -e "\t||2. Python Practice - GS Tut\t||"
	echo  -e "\t||3. Python Practice - Other\t||"
	echo  -e "\t╚================================╝"
	read -p "Enter the Choice : " pchoice
	case $pchoice in
	1)
		CLP
		;;
	2)
		GSP
		;;
	3)
		OPP
		;;
	*)
		echo "Enter the valid Task number!!"
		PP
	;;
	esac
}

#5. Bash Practice
BP(){

	echo "Prepare for Bash Script Prctical...."
	sleep 1
	echo  -e "\t╔================================╗"
	echo  -e "\t||1. Bash Practice - LAB\t||"
	echo  -e "\t||2. Bash Practice - Tutorial\t||"
	echo  -e "\t||3. Bash Practice - Assignment\t||"
	echo  -e "\t||4. Bash Practice - Other\t||"
	echo  -e "\t╚================================╝"
	read -p "Enter the Choice : " pchoice
	case $pchoice in
	1)
		CLB
		;;
	2)
		BPT
		;;
	3)
		BPA
		;;
	4)
		OBS
		;;
	*)
		echo "Enter the valid Task number!!"
		BP
	;;
	esac
}
#6. DS & Algo with C++ Practice
DSAP(){
	echo "Please setup the 'DS & Algo with C++ Practice' Task"
	sleep 1
	echo "Exiting..........."
	sleep 2
	exit
}
#7. Edit this Script
ETS(){
	echo "Prepare for Startup Script - Bash Script Editing...."
	sleep 1
	echo "Opening Visual Studio ......"
	sleep 2
	code -r /home/kali/Documents/GitHub/Startup_Script/
}
#8. SunnySahsi.me
SSM(){
	echo "Prepare for Online Portfolio - Web Developmrnt Project...."
	sleep 1
	echo "Opening Visual Studio ......"
	sleep 2
	code -r /home/kali/Documents/GitHub/sahsisunny.github.io
}
#Sub Menu Functions
#2. Python Practice
GSP(){
	echo "Prepare for Geeky Shows - Python Prctical...."
	sleep 2
	echo "Opening PyCharm IDE......"
	sleep 2
	/usr/share/pycharm-community-2021.2/bin/pycharm.sh -r /home/kali/Documents/GitHub/GS_Python_Practice/
}
OPP(){
	echo "Prepare Other - Python Prctical...."
	sleep 2
	echo "Opening PyCharm IDE......"
	sleep 2
	/usr/share/pycharm-community-2021.2/bin/pycharm.sh -r /home/kali/Documents/GitHub/Python_Practice/
}
#Bash Practice
BPT(){
	echo "Prepare for Tutorial - Bash Script Prctical...."
	sleep 1
	echo "Opening Visual Studio ......"
	sleep 2
	code -r /home/kali/Documents/GitHub/Bash_Script_Practice/
}
BPA(){
	echo "Prepare For  - Bash Assignment...."
	sleep 1
	echo "Opening Visual Studio ......"
	sleep 2
	code -r /home/kali/Documents/GitHub/Bash_Assignments/
}
OBS(){
	echo "Prepare Other - Bash Prctical...."
	sleep 1
	echo "Opening Visual Studio ......"
	sleep 2
	code -r /home/kali/Documents/GitHub/Bash_Tools/
}
banner(){
	figlet -w 200 -f Big\ Money-ne.flf "Hi xPRO"
	echo "What you want to do this time....."

	echo  -e " \t╔================================╗"
	echo  -e "\t||1. College Lab - Python\t||"
	echo  -e "\t||2. College Lab - Bash Script\t||"
	echo  -e "\t||3. Hacking Practice\t\t||"
	echo  -e "\t||4. Python Practice\t\t||"
	echo  -e "\t||5. Bash Practice\t\t||"
	echo  -e "\t||6. DS & Algo with C++ Practice||"
	echo  -e "\t||7. Edit this Script\t\t||"
	echo  -e "\t||8. SunnySahsi.me\t\t||"
	echo  -e "\t||9. Exit\t\t\t||"
	echo  -e " \t╚================================╝"

	read -p "Enter the Task number : " num
	case $num in
		1)
			CLP
			;;
		2)
			CLB
			;;
		3)
			HP
			;;
		4)
			PP
			;;
		5)
			BP
			;;
		6)
			DSAP
			;;
		7)
			ETS
			;;
		8)
			SSM
			;;
		9)
			echo "Exiting..........."
			sleep 2
			exit
			;;
		*)
			echo "Enter the valid Task number!!"
			clear
			banner
		;;
	esac
}
#Calling Functions
banner