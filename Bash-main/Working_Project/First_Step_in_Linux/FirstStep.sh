#!/bin/bash
clear

echo "What do you want to install xPro ??"
echo "1. Chrome"
echo "2. Visual Studio"
echo "3. Github Desktop"
echo "4. PyCharm"
echo "5. IntelliJ IDEA"
echo "6. Android Studio"
echo "7. VLC"
echo "8. Hindi Fonts"


chromeBrowser(){
    mkdir Chrome
    cd Chrome
    wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
    chmod 777 *
    sudo dpkg -i *.deb
}
VCode(){
    mkdir Visual_Studio
    cd Visual_Studio
    wget https://az764295.vo.msecnd.net/stable/c3f126316369cd610563c75b1b1725e0679adfb3/code_1.58.2-1626302803_amd64.deb
    chmod 777 *
    sudo dpkg -i *.deb
}
gitDesktop(){
    mkdir Github_Desktop
    cd Github_Desktop
    wget https://github.com/shiftkey/desktop/releases/download/release-2.9.0-linux4/GitHubDesktop-linux-2.9.0-linux4.deb
    chmod 777 *
    sudo dpkg -i *.deb
}
pycharm(){
    mkdir PyCharm
    cd PyCharm
    wget https://download-cdn.jetbrains.com/python/pycharm-community-2021.2.tar.gz
    tar -xvf *.tar.gz
    rm *.tar.gz -y
    sudo mv * /usr/share
    echo "/usr/share/pycharm-community-2021.2/bin/pycharm.sh"       #this is the command to start pycharm
}
idea(){
    mkdir IntelliJ_IDEA
    cd IntelliJ_IDEA
    wget https://download-cdn.jetbrains.com/idea/ideaIC-2021.2.tar.gz
    tar -xvf *.tar.gz
    rm *.tar.gz -y
    sudo mv * /usr/share
    echo "/usr/share/pycharm-community-2021.2/bin/pycharm.sh"       #this is the command to start pycharm
}
andStd(){
    mkdir Android_Studio
    cd Android_Studio
    wget https://r3---sn-qxaeen7l.gvt1.com/edgedl/android/studio/ide-zips/2020.3.1.22/android-studio-2020.3.1.22-linux.tar.gz
    tar -xvf *.tar.gz
    sudo mv * /usr/share
}
vlcPlayer(){
    mkdir VLC
    cd VLC
    wget http://ftp.br.debian.org/debian/pool/main/v/vlc/vlc_3.0.16-1_amd64.deb
    chmod 777 *
    sudo dpkg -i *.deb
}
HindFont(){
    mkdir Hind
    cd Hind
    wget https://fonts.google.com/download?family=Hind
    unzip download?family=Hind
    rm -rf download?family=Hind
    cd ..
    sudo mv Hind  /usr/share/fonts/
}