cvt 1366 768
xrandr --newmode  "1368x768_60.00"   85.25  1368 1440 1576 1784  768 771 781 798 -hsync +vsync
xrandr --addmode VGA-1 "1368x768_60.00"
xrandr --output VGA-1 --mode 1368x768_60.00

alias upsys='sudo apt-get update && sudo apt-get upgrade'