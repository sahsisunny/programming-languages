#!/bin/sh
clear

# Colors
Red='\033[0;31m'          # Red
Blue='\033[0;34m'         # Blue
White='\033[0;37m'        # White
Yellow='\033[0;33m'       # Yellow
BYellow='\033[1;33m'      # Bold Yellow
BGreen='\033[1;32m'       # Bold Green

Color_Off='\033[0m'       # Text Reset

sunnyBanner(){
	printf "\n${BYellow}"
    printf "\t\t            T H I S  S C R I P T  I S  M A D E  B Y  S U N N Y  S A H S I\n"
    printf "\t\t        +-----------------------------------------------------------------+\n"
	printf "\t\t${Blue}███████${White}╗${Blue}██${White}╗   ${Blue}██${White}╗${Blue}███${White}╗   ${Blue}██${White}╗${Blue}███${White}╗   ${Blue}██${White}╗${Blue}██${White}╗   ${Blue}██${White}╗    ${Red}███████${White}╗ ${Red}█████${White}╗ ${Red}██${White}╗  ${Red}██${White}╗${Red}███████${White}╗${Red}██${White}╗${Blue}\n"
	printf "\t\t${Blue}██${White}╔════╝${Blue}██${White}║   ${Blue}██${White}║${Blue}████${White}╗  ${Blue}██${White}║${Blue}████${White}╗  ${Blue}██${White}║╚${Blue}██${White}╗ ${Blue}██${White}╔╝    ${Red}██${White}╔════╝${Red}██${White}╔══${Red}██${White}╗${Red}██${White}║  ${Red}██${White}║${Red}██${White}╔════╝${Red}██${White}║${Blue}\n"
	printf "\t\t${Blue}███████${White}╗${Blue}██${White}║   ${Blue}██${White}║${Blue}██${White}╔${Blue}██${White}╗ ${Blue}██${White}║${Blue}██${White}╔${Blue}██${White}╗ ${Blue}██${White}║ ${White}╚${Blue}████${White}╔╝     ${Red}███████${White}╗${Red}███████${White}║${Red}███████${White}║${Red}███████${White}╗${Red}██${White}║${Blue}\n"
	printf "\t\t${Blue}${White}╚════${Blue}██${White}║${Blue}██${White}║   ${Blue}██${White}║${Blue}██${White}║╚${Blue}██${White}╗${Blue}██${White}║${Blue}██${White}║╚${Blue}██${White}╗${Blue}██${White}║  ${White}╚${Blue}██${White}╔╝      ${White}╚════${Red}██${White}║${Red}██${White}╔══${Red}██${White}║${Red}██${White}╔══${Red}██${White}║╚════${Red}██${White}║${Red}██${White}║${Blue}\n"
	printf "\t\t${Blue}███████${White}║╚${Blue}██████${White}╔╝${Blue}██${White}║ ╚${Blue}████${White}║${Blue}██${White}║ ╚${Blue}████${White}║   ${Blue}██${White}║       ${Red}███████${White}║${Red}██${White}║  ${Red}██${White}║${Red}██${White}║  ${Red}██${White}║${Red}███████${White}║${Red}██${White}║${Blue}\n"
	printf "\t\t${Blue}${White}╚══════╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝  ╚═══╝   ╚═╝       ${White}╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚═╝${Blue}\n"
	printf "\t\t        ${BYellow}+-----------------------------------------------------------------+\n ${Color_Off}"
	printf "\n"
}


rdsBanner(){
	printf "\n${BYellow}"
    printf "\t\t            T H I S  S C R I P T  I S  M A D E  B Y  S U N N Y  S A H S I\n"
    printf "\t\t        +-----------------------------------------------------------------+\n"
	printf "\t\t\t\t\t${Blue}╦═╗┌─┐┌─┐┬    ${White}╔╦╗┌─┐┬  ┬  ${Red}╔═╗┌─┐ ┬ ┬┌─┐┌┬┐${Color_Off}\n"
	printf "\t\t\t\t\t${Blue}╠╦╝├┤ ├─┤│    ${White} ║║├┤ └┐┌┘  ${Red}╚═╗│─┼┐│ │├─┤ ││${Color_Off}\n"
	printf "\t\t\t\t\t${Blue}╩╚═└─┘┴ ┴┴─┘  ${White}═╩╝└─┘ └┘   ${Red}╚═╝└─┘└└─┘┴ ┴─┴┘${Color_Off}\n"
	printf "\t\t        ${BYellow}+-----------------------------------------------------------------+\n ${Color_Off}"
	printf "\n"
}

dsaBanner(){
	printf "\n${BYellow}"
    printf "\t\t            T H I S  S C R I P T  I S  M A D E  B Y  S U N N Y  S A H S I\n"
    printf "\t\t        +-------------------------------------------------------------------------+\n"
	printf "\t\t\t\t.----------------.  .----------------.  .----------------.   	\n"
	printf "\t\t\t\t| .--------------. || .--------------. || .--------------. |  \n"
	printf "\t\t\t\t| |  ________    | || |    _______   | || |      __      | |  \n"
	printf "\t\t\t\t| | |_   ___  .  | || |   /  ___  |  | || |     /  \     | |  \n"
	printf "\t\t\t\t| |   | |    . \ | || |  |  (__ \_|  | || |    / /\ \    | |  \n"
	printf "\t\t\t\t| |   | |    | | | || |    .___ -.   | || |   / ____ \   | |  \n"
	printf "\t\t\t\t| |  _| |___.  / | || |  | \____) |  | || | _/ /    \ \_ | |  \n"
	printf "\t\t\t\t| | |________.   | || |  |_______.'  | || ||____|  |____|| |  \n"
	printf "\t\t\t\t| |              | || |              | || |              | |  \n"
	printf "\t\t\t\t| '--------------' || '--------------' || '--------------' |  \n"
	printf "\t\t\t\t'----------------'  '----------------'  '----------------'   	\n"
	printf "\t\t        ${BYellow}+-------------------------------------------------------------------------+\n ${Color_Off}"
	printf "\n"
}


main(){
	sunnyBanner
	printf  "What you want to do this time.....\n"

	echo  -e " \t╔================================╗"
	echo  -e "\t||1. Real Dev Squad Task\t||"
	echo  -e "\t||2. Data Structure & Algo\t||"
	echo  -e "\t||3. Learn Flutter\t\t||"
	echo  -e "\t||4. Learn Dart\t\t\t||"
	echo  -e "\t||5. Learn React\t\t||"
	echo  -e "\t||6. Learn Javascript\t\t||"
	echo  -e "\t||7. Edit this Script\t\t||"
	echo  -e "\t||8. Others\t\t\t||"
	echo  -e "\t||9. Exit\t\t\t||"
	echo  -e " \t╚================================╝"

	read -p "Enter the Task Number:- " num
	case $num in
		1)
			realDevSquadTask
			;;
		2)
			dataStructureAlgo
			;;
		3)
			learnFlutter
			;;
		4)
			learnDart
			;;
		5)
			learnReact
			;;
		6)
			learnJavascript
			;;
		7)
			editScript
			;;
		8)
			others
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



#Main Menu Function
# 1. Real Dev Squad Task
realDevSquadTask(){
	clear
	rdsBanner
	echo "Which repo you want to open...."

	echo  -e " ${Blue}\t╔================================╗"
	echo  -e "\t|| ${Yellow}1. RDS Backend\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}2. RDS Status Site\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}3. RDS Dashboard Site\t${Blue}||"
	echo  -e "\t|| ${Yellow}4. RDS Members Site\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}5. RDS Mobile App\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}6. RDS My Site\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}7. Back to Main Menu\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}8. Exit\t\t\t${Blue}||"
	echo  -e " ${Blue}\t╚================================╝"

	read -p "Enter the RDS Repo Number:- " num

	case $num in
		1)
			openRepo "RDS Backend" "website-backend"
			;;
		2)
			openRepo "RDS Status Site" "website-status"
			;;
		3)
			openRepo "RDS Dashboard Site" "website-dashboard"
			;;
		4)
			openRepo "RDS Members Site" "website-members"
			;;
		5)
			openRepo "RDS Mobile App" "website-mobile"
			;;
		6)
			openRepo "RDS My Site" "website-my"
			;;
		7)
			banner
			;;
		8)
			echo "Exiting..........."
			sleep 2
			exit
			;;
		*)
			echo "Enter the valid Task number!!"
			clear
			realDevSquadTask
		;;
	esac
}

# function for RDS Repo
openRepo() {
	local message=$1
    local repoName=$2

    echo "Wow!! you want to work on $message"
    sleep 2
    echo "Opening $message Repo...."
    sleep 2
    code "/home/shreeram/Documents/Work/RDS/$repoName"	
	realDevSquadTask
}

# 2. Data Structure & Algo
dataStructureAlgo(){
	clear
	dsaBanner
	echo "Choose the option...."

	echo  -e " ${Blue}\t╔================================╗"
	echo  -e "\t|| ${Yellow}1. Woman Algro Crew Class\t${Blue}||"
	echo  -e "\t|| ${Yellow}2. Apna College\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}3. Sunny Sir's Class\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}4. Back to Main Menu\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}5. Exit\t\t\t${Blue}||"
	echo  -e " ${Blue}\t╚================================╝"

	read -p "Enter the DSA Option Number:- " num

	case $num in
		1)
			echo "Opening Discord...."
			sleep 2
			discord
			echo "Opening DSA Practice repo in VS Code...."
			sleep 2
			code "/home/shreeram/Documents/Work/DSA/DSA-Practice"
			;;
		2)
			echo "Opening Apna College Website...."
			sleep 2
			google-chrome "https://www.apnacollege.in/path-player?courseid=alpha-batch-3&unit=63b9667fb133f8008b0fbadfUnit"
			sleep 2
			echo "Opening DSA Practice repo in VS Code...."
			sleep 2
			code "/home/shreeram/Documents/Work/DSA/DSA-Practice"
			;;
		3)
			echo "Opening Sunny Sir's Videos Folder...."
			sleep 2
			xdg-open "/home/shreeram/Documents/Work/DSA/Sunny Sir's Videos"
			sleep 2
			echo "Opening DSA Practice repo in VS Code...."
			sleep 2
			code "/home/shreeram/Documents/Work/DSA/DSA-Practice"
			;;
		4)
			banner
			;;
		5)
			echo "Exiting..........."
			sleep 2
			exit
			;;
		*)
			echo "Enter the valid Task number!!"
			clear
			dataStructureAlgo
		;;
	esac
}

# 3. Learn Flutter
learnFlutter(){
	clear
	figlet -w 200 "Learn Flutter"
	sleep 2
	echo "Fantastic!! you want to learn Flutter"
	sleep 2
	echo "Open Google CodeLabs in Chrome...."
	sleep 2
	google-chrome "https://codelabs.developers.google.com/codelabs/first-flutter-app-pt1#0"
	sleep 2
	echo "Opening VS Code for Flutter...."
	sleep 2
	code "/home/shreeram/Documents/Work/Flutter"
	sleep 2
	echo "Opening Android Studio for Flutter...."
	sleep 2
	android-studio
	sleep 2
}

# 4. Learn Dart
learnDart(){
	clear
	figlet -w 200 "Learn Dart"
	sleep 2
	echo "Fabulous!! you want to learn Dart let's start"
	sleep 2
	echo "Open Google CodeLabs in Chrome...."
	sleep 2
	google-chrome "https://dart.dev/codelabs"
	sleep 2
	echo "Opening VS Code for Dart...."
	sleep 2
	code "/home/shreeram/Documents/Work/Dart"
	sleep 2
}

# 5. Learn React
learnReact(){
	clear
	figlet -w 200 "Learn React"
	sleep 2
	echo "Great!! you want to learn React"
	sleep 2
	echo "Opening React Official Website in Chrome...."
	sleep 2
	google-chrome "https://reactjs.dev/"
	sleep 2
	echo "Opening VS Code for React...."
	sleep 2
	code "/home/shreeram/Documents/Work/React"
	sleep 2
}

# 6. Learn JavaScript
learnJavaScript(){
	clear
	figlet -w 200 "Learn JavaScript"
	sleep 2
	echo "Awesome!! you want to learn JavaScript"
	sleep 2
	echo "Opening JavaScript Official Website in Chrome...."
	sleep 2
	google-chrome "https://developer.mozilla.org/en-US/docs/Web/JavaScript"
	sleep 2
	echo "Opening VS Code for JavaScript...."
	sleep 2
	code "/home/shreeram/Documents/Work/JavaScript"
	sleep 2
}

# 7. Edit this Script File
editScriptFile(){
	clear
	figlet -w 200 "Edit Script File"
	sleep 2
	echo "Opening VS Code for Script File...."
	sleep 2
	code "/home/shreeram/Documents/Work/Shell Script/realDevSquad.sh"
	sleep 2
}

# 8. Others
others(){
	clear
	figlet -w 200 "Others"
	sleep 2
	echo "Choose the option...."

	echo  -e " ${Blue}\t╔================================╗"
	echo  -e "\t|| ${Yellow}1. Open VS Code\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}2. Open Android Studio\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}3. Open Chrome\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}4. Open Discord\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}5. Open Terminal\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}6. Back to Main Menu\t\t${Blue}||"
	echo  -e "\t|| ${Yellow}7. Exit\t\t\t${Blue}||"
	echo  -e " ${Blue}\t╚================================╝"

	read -p "Enter the Others Option Number:- " num

	case $num in
		1)
			echo "Opening VS Code...."
			sleep 2
			code
			;;
		2)
			echo "Opening Android Studio...."
			sleep 2
			android-studio
			;;
		3)
			echo "Opening Chrome...."
			sleep 2
			google-chrome
			;;
		4)
			echo "Opening Discord...."
			sleep 2
			discord
			;;
		5)
			echo "Opening Terminal...."
			sleep 2
			gnome-terminal
			;;
		6)
			banner
			;;
		7)
			echo "Exiting..........."
			sleep 2
			exit
			;;
		*)
			echo "Enter the valid Task number!!"
			clear
			others
		;;
	esac
}














#Calling Functions
main