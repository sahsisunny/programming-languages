idea(){
    mkdir IntelliJ_IDEA
    cd IntelliJ_IDEA
    wget https://download-cdn.jetbrains.com/idea/ideaIC-2021.2.tar.gz
    tar -xvf *.tar.gz
    rm *.tar.gz -y
    sudo mv * /usr/share
    echo "/usr/share/pycharm-community-2021.2/bin/pycharm.sh"       #this is the command to start pycharm
}
idea