# Raspberry / Orange Pi IO Extension Board

Плата призначена для розширення кількості входів/виходів одноплатного компютера Raspberry/Orange Pi (Ці моделі є 100% сумісні по підключенню GPIO розєма)

## Вигляд плати
![Board 45 deg view](https://raw.githubusercontent.com/KushlaVR/OrangePiIOExtensionBoard/master/View.jpg)


Можлвості
- 40-ка піновий розєм для підключення Raspberry
- Годинник рельного часу із незалежним живленням від 3,3В батарейки DS1307 (При вимкненні живлення годинник не збивається)
- 8 чотирипінових виходів для для підключення датчиків по шині I2C (Наприклад: Компас HMC5883L, Гіроскоп MPU6050, Термометр TC74 та багато інших пристроїв) VCC лінія шини може бути підключена до 5В або 3,3В з допомогою джампера.
-8 трипінових вихдів для підключння датчиків по шині 1-Wire. (Наприклад: термометр DS18B20, домофонний ключ "таблетка" та ін.) VCC лінія шини може бути підключена до 5В або 3,3В з допомогою джампера.
- 16 цифрових входів/виходів для підключення зовнішніх приладів, або кінцевих сенсорів (Наприклад: Поплавкові датчики рівня води, герконові кінцевики, кнопки, модуль реле на 1/2/8/16 реле).
Кожені вихід має відповідний світлодіод, який загоряєтьсся при активацїі відповідного виходу.
Виходи реалізовані на двох модулях PCF8574 на 8 портів. На платі передбачено місце під перемички для налаштування адрес модулів. Типово перемички встановлено таким чином, що адреси модулів 0x25 та 0x27.
- Кожен GPIO Raspberry виведено на окрему шину (Шина сумісна з датчиками для Arduino. Біля кожного GPIO продубльовано піни живлення і мінус).

Для прикладів використано бібліотеку WiringPi/WiringOP.
Якщо використовувати плату у компекті з Raspbery pi необхідна бібліотека WiringPi https://github.com/LeMaker/WiringBP
Якщо використовувати плату у компекті з Orange pi необхідна бібліотека WiringOP 
- Для плат на базі AllWinner H3 https://github.com/zhaolei/WiringOP
- Для плат на базі AllWinner H5 https://github.com/tumugin/WiringOP
Якщо бібліотека gpio не може визначити тип плати і у вас процесор AllWinner H5 то спробуйте мою модифікацію https://github.com/KushlaVR/WiringOP (вона аналогічна до модифікації H5, але перевірка версії процесора ВИМКНЕНА)


## Інструкція для git
### Завантажити н борт Raspberry/Orange

```
git clone https://github.com/KushlaVR/OrangePiIOExtensionBoard.git /OrangePi_Prime/OrangePiIOExtensionBoard/
```
### Налаштування для контролю версії локальної копії
Необхідно клонувати проект у свій акаунт Git і виконати наступні дії
```
cd OrangePiIOExtensionBoard
git remote add upstream  https://github.com/<YOUR_GIT_USER_NAME>/OrangePiIOExtensionBoard.git
git remote -v
```
Застосувати локальні зміни і вивантажити локальну версію у GIT
```
cd OrangePiIOExtensionBoard
git add .
git config --global push.default simple
git commit -m "OrangePiIOExtensionBoard"
git push origin
```

## Розташування модулів
![Board 45 deg view](https://raw.githubusercontent.com/KushlaVR/OrangePiIOExtensionBoard/master/Descryption.jpg)
