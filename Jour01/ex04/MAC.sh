ifconfig |grep ether | sed -e 's/ether //' |tr -d ' ' | tr -d '\t'
