# Orange Pi IO Extension Board

Плата призначена для розширення кількості входів/виходів одноплатного компютера Raspberry/Orange Pi (Ці моделі є 100% сумісні по підключенню GPIO розєма)

Можлвості
- 40-ка піновий розєм для підключення Raspberry
- Годинник рельного часу із незалежним живленням від 3,3В батарейки DS1307 (При вимкненні живлення годинник не збивається)
- 8 чотирипінових виходів для для підключення датчиків по шині I2C (Наприклад: Компас HMC5883L, Гіроскоп MPU6050, Термометр TC74 та багато інших пристроїв) VCC лінія шини може бути підключена до 5В або 3,3В з допомогою джампера.
-8 трипінових вихдів для підключння датчиків по шині 1-Wire. (Наприклад: термометр DS18B20, домофонний ключ "таблетка" та ін.) VCC лінія шини може бути підключена до 5В або 3,3В з допомогою джампера.
- 16 цифрових входів/виходів для підключення зовнішніх приладів, або кінцевих сенсорів (Наприклад: Поплавкові датчики рівня води, герконові кінцевики, кнопки, модуль реле на 1/2/8/16 реле).
Кожені вихід має відповідний світлодіод, який загоряєтьсся при активацїі відповідного виходу.
Виходи реалізовані на двох модулях PCF8574 на 8 портів. На платі передбачено місце під перемички для налаштування адрес модулів. Типово перемички встановлено таким чином, що адреси модулів 0x25 та 0x27.
- Кожен GPIO Raspberry виведено на окрему шину (Шина сумісна з датчиками для Arduino. Біля кожного GPIO продубльовано піни живлення і мінус).

## Інструкція для git

```
git clone https://github.com/KushlaVR/OrangePiIOExtensionBoard.git /OrangePi_Prime/OrangePiIOExtensionBoard/
cd OrangePiIOExtensionBoard
git remote add upstream  https://github.com/KushlaVR/OrangePiIOExtensionBoard.git
git remote -v
git add .
git config --global push.default simple
git commit -m "OrangePiIOExtensionBoard"
git push origin
```
