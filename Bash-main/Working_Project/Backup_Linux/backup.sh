#!/bin/bash


filename="backup_`date +%d_%m_%Y_%H_%M_%S`.tar"

tar -cvf /home/kali/Downloads/${filename} /home/kali/Documents/

#scp /home/techhacker/Documents/backups/${filename} techhacker98@192.168.164.132:~/Documents/ubuntu_backups