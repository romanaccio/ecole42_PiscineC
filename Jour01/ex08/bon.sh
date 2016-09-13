ldapsearch -Q -LLL  "(sn=*bon*)" | grep "sn: "  | wc -l |tr -d " "
