# set -x 
# FT_LINE1=8
# FT_LINE2=16

cat /etc/passwd |grep -v "#" | sed -e 'N;s/^.*\n//' |cut -d : -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed -e 's/,$/./' |sed -e 's/,/, /g'
