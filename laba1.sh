#!/bin/bash
echo -n "Дата: "
date
echo -n "Имя учетной записи: "
whoami
echo -n "Доменное имя ПК: "
hostname

echo "Процессор:"
echo -e -n "\t* Модель - " ; lscpu|grep Модель | awk '{print $NF}'; 
echo -e -n "\t* Архитектура - " ; lscpu|grep Архитектура| awk '{print $NF}'; 
echo -e -n "\t* Тактовая частота - " ; lscpu|grep Имя| awk '{print $NF}'; 
echo -e -n "\t* Количество ядер - " ; lscpu|grep Ядер| awk '{print $NF}'; 
echo -e -n "\t* Количество потоков на одно ядро - " ; lscpu|grep Thread| awk '{print $NF}'; 

echo "Оперативная память:"
echo -e -n "\t* Всего - " ; free -h|grep Mem| awk '{print $2}';
echo -e -n "\t* Доступно - " ; free -h|grep Mem| awk '{print $NF}'; 

echo "Жесткий диск:"


echo -e -n "\t* Всего - " ; df | awk '{sum +=$2} END {print sum}';
echo -e -n "\t* Доступно - " ; lsblk | awk '{sum +=$4} END {print sum}'; 
echo -e -n "\t* Смонтировано в корневую директорию - /" ; df -h|grep "6% /"| cut -c 2-10;
echo -e -n "\t* SWAP всего - " ; free -h|grep Swap| awk '{print $2}';
echo -e -n "\t* SWAP доступно - " ; free -h|grep Swap| awk '{print $2}';

echo -e "Имя сетевого интерфейса\t\tMAC адрес\t\tIP адрес\t\tСкорость соединения"
for iface in /sys/class/net/*; do
	echo -ne "${iface##*/}\t\t\t\t";
	tr "\n" "\t" < "$iface/address";
	printf "%-24s" " $(ip -4 -o a | grep " ${iface##*/} " | tr -s ' ' |  cut -d ' ' -f4 | tr -d '\n')"; 
	ip -4 -0 a | grep " ${iface##*/}: " | tr -s ' ' | cut -d' ' -f13  
done


