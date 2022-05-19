# Raspberry / Orange Pi IO Extension Board


# Поки ти читаєш цей текст - українці гинуть від російських ракет.
Ти можеш перерахувати будь-яку суму на спеціальний рахунок Національного Банку України для допомоги збройним силам україни у протистоянні російському окупанту.
Навть незначна сума може врятувати чиєсь життя!

### Для зарахування коштів у національній валюті:

Банк: Національний банк України

МФО 300001

Рахунок № UA843000010000000047330992708

код ЄДРПОУ 00032106

Отримувач: Національний банк України 

### Для зарахування коштів у USD: 

BENEFICIARY: National Bank of Ukraine

BENEFICIARY BIC: NBUA UA UX

BENEFICIARY ADDRESS: 9 Instytutska St, Kyiv, 01601, Ukraine

ACCOUNT NUMBER: 804790258

BENEFICIARY BANK NAME: JP MORGAN CHASE BANK, New York

BENEFICIARY BANK BIC: CHASUS33

ABA 0210 0002 1

BENEFICIARY BANK ADDRESS: 383 Madison Avenue, New York, NY 10017, USA

PURPOSE OF PAYMENT: for ac 47330992708 

### Для зарахування коштів у EUR: 

BENEFICIARY: National Bank of Ukraine

IBAN DE05504000005040040066

PURPOSE OF PAYMENT: for ac 47330992708

BENEFICIARY BANK NAME: DEUTSCHE  BUNDESBANK, Frankfurt

BENEFICIARY BANK BIC: MARKDEFF

BENEFICIARY BANK ADDRESS: Wilhelm-Epstein-Strasse 14, 60431 Frankfurt Am Main, Germany

### Для зарахування коштів у GBP: 

BENEFICIARY/RECIPIENT NAME: National Bank of Ukraine

ACCOUNT NUMBER: 80033041

IBAN GB52CHAS60924280033041

BENEFICIARY ADDRESS: 9 Instytutska St, Kyiv, 01601, Ukraine

BENEFICIARY BANK NAME: JP MORGAN CHASE BANK NA, London

BENEFICIARY BANK BIC: CHASGB2L

SORT CODE: 60-92-42 

BENEFICIARY BANK ADDRESS: 125 London Wall, London EC2Y 5AJ, UK

PURPOSE OF PAYMENT: for ac 47330992708


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
### Завантажити на борт Raspberry/Orange

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
## Тестова програма
Тестова програма знаходиться у папці <b>BoardTests</b>. Програма насисана у середовищі CodeLight.

## Розташування модулів
![Board 45 deg view](https://raw.githubusercontent.com/KushlaVR/OrangePiIOExtensionBoard/master/Descryption.jpg)

