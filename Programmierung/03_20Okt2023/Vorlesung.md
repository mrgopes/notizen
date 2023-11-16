auto j {5ul} = j ist ein unsgined long = automatisch den Typ einer Variable bestimmen

Alle Arten von int in double Umwandlung:
![[int_double_umwandlung.png]]

# Kontrollstrukturen

## Anweisungen

fast alles in Cpp
![[anweisungen.png]]

- Ausdruck mit Strichpunkt am Ende
- Deklarationen
- Kotrollstatements - schleifen, bedingteanweisungen, ifanweisung...

### Compound statement
Eine Sequenz von beliebig vielen Statements
z.B. bei der Funktion main() {}

Achtung bei Verschachtelungen von ifs ohne {}!

for (initialisierung; test; re-initialiesierung)
re-initialisierung passiet immer am Ende der jeweilige Iteration der Schleife

'break'';'

### Vergleichsoperatoren

<, <=, >, >=, =\=, !=

while (cin >> i) {
bis es Eingabe gibt, wirds eingelesen und dieses code wir ausgefuehrt
}

### Logische Ausdruecke

**Logische Operatoren:**
- NICHT am staerksten
- UND mittel
- ODER am schwaechsten

Logische Ausdruecke werden immer von Links nach Rechts ausgewertet

**Die Operatoren arbeiten nur so lang bis das Ergebnis bekannt ist = oder braucht nur einmal TRUE, und braucht nur einmal FALSE und die weitere Operanden werden dann gar nicht bewertet**

### Lokaler Geltungsbereich

Variablen gelten nur innerhalb eines Blocks, das Geltungsbereich endet mit dem Ende des Blocks, wo sie definiert wurde.

Falls eine Variable 2mal definiert wurde (global und lokal), ::i heisst 'benutze die globale i, nicht die lokale'