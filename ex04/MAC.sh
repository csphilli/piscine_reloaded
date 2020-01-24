ifconfig -a link | grep -w "ether" | sed 's/ether//' | cut -d " " -f 2
