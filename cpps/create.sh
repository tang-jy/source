qustions=(A B C D E F G H I J K L M N)
cd contest
mkdir $1
cd $1
pos=0
while [ ${qustions[$pos]} != $2 ]
do 
    touch ${qustions[$pos]}.cpp
    let "pos++"
done
