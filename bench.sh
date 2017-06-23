mkdir -p temp
echo 'n,time' > times.csv
for i in `seq 100000 100000 10000000`;
do
  ./bin/rand 100 $i > temp/input  
  time -o temp/time.out ./bin/sort temp/input temp/output
  echo $i,`head -1 temp/time.out | cut -f 1 -d ' ' | sed -r 's:.{4}$::'` >> times.csv
done
rm -rf temp
