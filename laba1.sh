#!/bin/bash
echo -n "Дата: "
date
echo -n "Имя учетной записи: "
whoami
echo -n "Доменное имя ПК: "
hostname

echo "Процессор:"
echo -e -n "\t* Модель - " ; lscpu|grep Модель:| awk '{print $NF}'; 
echo -e -n "\t* Архитектура - " ; lscpu|grep Архитектура:| awk '{print $NF}'; 
echo -e -n "\t* Тактовая частота - " ; lscpu|grep Имя| awk '{print $NF}'; 
echo -e -n "\t* Количество ядер - " ; lscpu|grep Ядер| awk '{print $NF}'; 
echo -e -n "\t* Количество потоков на одно ядро - " ; lscpu|grep Thread| awk '{print $NF}'; 

echo "Оперативная память:"
echo -e -n "\t* Всего - " ; free -h|grep Mem| awk '{print $2}';
echo -e -n "\t* Доступно - " ; free -h|grep Mem| awk '{print $NF}'; 

echo "Жесткий диск:"
df
#echo -e -n "\t* Всего - " ; df |grep Mem| awk '{print $2}';
#echo -e -n "\t* Доступно - " ; df |grep Mem| awk '{print $NF}'; 


