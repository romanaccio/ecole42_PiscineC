if [ $# -eq 0 ]
  then
    echo "Syntax error"
	echo "Usage : ./moulipute.sh path_to_rush {fr}"
	exit
fi
rm -f user_result.log
touch user_result.log

echo "-------test00-------" >> user_result.log
cat .test00 | $1 >> user_result.log

echo "-------test01-------" >> user_result.log
cat .test01 | $1 >> user_result.log

echo "-------test02-------" >> user_result.log
cat .test02 | $1 >> user_result.log

echo "-------test03-------" >> user_result.log
cat .test03 | $1 >> user_result.log

echo "-------test04-------" >> user_result.log
cat .test04 | $1 >> user_result.log

echo "-------test05-------" >> user_result.log
cat .test05 | $1 >> user_result.log

echo "-------test06-------" >> user_result.log
cat .test06 | $1 >> user_result.log

echo "-------test07-------" >> user_result.log
cat .test07 | $1 >> user_result.log

echo "-------test08-------" >> user_result.log
cat .test08 | $1 >> user_result.log

echo "-------test09-------" >> user_result.log
cat .test09 | $1 >> user_result.log

echo "-------test10-------" >> user_result.log
cat .test10 | $1 >> user_result.log

echo "-------test11-------" >> user_result.log
cat .test11 | $1 >> user_result.log

echo "-------test12-------" >> user_result.log
cat .test12 | $1 >> user_result.log

echo "-------test13-------" >> user_result.log
cat .test13 | $1 >> user_result.log

echo "-------test14-------" >> user_result.log
cat .test14 | $1 >> user_result.log

echo "-------test15-------" >> user_result.log
cat .test15 | $1 >> user_result.log

echo "-------test16-------" >> user_result.log
cat .test16 | $1 >> user_result.log

echo "-------test17-------" >> user_result.log
cat .test17 | $1 >> user_result.log

echo "-------test18-------" >> user_result.log
cat .test18 | $1 >> user_result.log

echo "-------test19-------" >> user_result.log
cat .test19 | $1 >> user_result.log

if [ \( $# -eq 2 \) -o \( $2 = "fr" \) ]
	then
		diff user_result.log result.fr.log
	else
		diff user_result.log result.log
fi
