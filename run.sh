#     █████ █████           ███             █████     
#    ▒▒███ ▒▒███           ▒▒▒             ▒▒███      
#     ▒▒███ ███    ██████  ████  ████████   ▒███ █████
#      ▒▒█████    ███▒▒███▒▒███ ▒▒███▒▒███  ▒███▒▒███ 
#       ▒▒███    ▒███ ▒███ ▒███  ▒███ ▒███  ▒██████▒  
#        ▒███    ▒███ ▒███ ▒███  ▒███ ▒███  ▒███▒▒███ 
#        █████   ▒▒██████  █████ ████ █████ ████ █████
#       ▒▒▒▒▒     ▒▒▒▒▒▒  ▒▒▒▒▒ ▒▒▒▒ ▒▒▒▒▒ ▒▒▒▒ ▒▒▒▒▒ 


NODEVICE_SELECT=1 LD_PRELOAD="$LD_PRELOAD:$(pwd)/out/build/gcc/yoink.so" vkcube
# what did you expect, some convoluted injection method that uses ptrace?
# because this is just a LD_PRELOAD, which works, so who gives a shit if it's basic?