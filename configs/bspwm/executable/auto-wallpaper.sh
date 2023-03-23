#! /bin/bash
folder="/home/ahacad/GitHub/wallpaper"
subfolder="fantasy"
while true
do
    if [ -z "${wallpapersubfolder}" ]; then
        rand=$(ls "${folder}/${subfolder}" | shuf -n 1);
    else
        rand=$(ls "${folder}/${wallpapersubfolder} | shuf -n 1")
    fi
    xwallpaper --zoom "${folder}/${subfolder}/${rand}"
    sleep 10m
done
