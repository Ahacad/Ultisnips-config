Vim�UnDo� x!�Rs�I�0i��!^k�є�iE��
I!�UX      cd "$ConfigFolder" || exit                             `�ɧ    _�                             ����                                                                                                                                                                                                                                                                                                                                                  V        `��T     �                backup_config() {       # rm configfolder/config       rm -rf "$2/$3"   %    # cp pcfolder/config configfolder       cp -r "$1/$3" "$2"   }           4backup_config "$HOME/.config" "$ConfigFolder" "nvim"   5backup_config "$HOME/.config" "$ConfigFolder" "sxhkd"   8backup_config "$HOME/.config" "$ConfigFolder" "newsboat"   9backup_config "$HOME/.config" "$ConfigFolder" "alacritty"   5backup_config "$HOME/.config" "$ConfigFolder" "bspwm"   7backup_config "$HOME/.config" "$ConfigFolder" "polybar"   8backup_config "$HOME/.config" "$ConfigFolder" "SELFMADE"   2backup_config "$HOME/.config" "$ConfigFolder" "lf"   8backup_config "$HOME/.config" "$ConfigFolder" "redshift"   9backup_config "$HOME/.config" "$ConfigFolder" "ibus/rime"   .backup_config "$HOME" "$ConfigFolder" ".zshrc"   2backup_config "$HOME" "$ConfigFolder" ".gitconfig"   2backup_config "$HOME" "$ConfigFolder" ".tmux.conf"   2backup_config "$HOME" "$ConfigFolder" ".oh-my-zsh"5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��U     �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��U     �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��V     �                M#RepoFolder="/media/HOME/ahacad/WORKSTATION/Working/-working/#Configurations"5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��V     �               7ConfigFolder="/home/ahacad/HOME/Configurations/configs"5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V        `��Z     �               ;wallpaper_folder="/home/ahacad/HOME/Configurations/configs"5�_�                           ����                                                                                                                                                                                                                                                                                                                                         L       v   L    `�ɛ    �               'CommitMessage=`date +'%Y%m%d'`"-backup"5�_�                            ����                                                                                                                                                                                                                                                                                                                                         L       v   L    `�ɦ    �      	         cd "$ConfigFolder" || exit5��