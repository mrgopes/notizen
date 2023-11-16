# Abstraktion

- reduktion von Informationen auf das wesentliche (einfacheres Konzept)
- Landkarte wie eine Graphen darzustellen

## Modell
- Darstellung fuer den Zweck relevanten Aspekte
- vereinfachte abstrakte Darstellung eines komplexen Systems

## Natuerliche Sprachen
- universell, vielseitig, ausdrucksstark
- sind ungenau, koennten unterschiedlich interpretiert werden

## Formale Sprachen
- Syntax, Semantik, Ausdrucksstaerke

# Formale Logk in der Informatik
- Logik:
	- Prinzipien des korrekten Schliessens
	- auch verwendet in Recht, Mathe, Informatik, Philosophie...
- Wie koennten wir anhand von das, was wir schon wissen, etwas neues beweisen

B1: Jeder Mensch hat 4 Augen.
B2: John ist ein Mensch.
Schlussfolgerung: Also hat John 4 Augen -- korrekt aus den gegebenen Aussagen

Bei falschen Praemissen haben wir als SCchluss eine falsche Aussage bekommen, obwohl die Regel korrekt ist.

## Bestandteile eines logischen Systems:
- **Syntax**: welche formalen Ausdruecke als Formeln des logischen Systems gelten, von "Atomen" bis zu weiteren Regeln
- **Semantik**: Bedeutung den syntaktischen Element, wie Formeln Wahrheitswerten zugeordnet werden koennen
- **Kalkuel**: Regeln zum Ableitung neuer wahrer Formeln

Wir werden sich mit Praedikatenlogik und Aussagenlogik beschaeftigen, obwohl es viele andere logische Systeme gibt.

# Aussagenlogik

- ein Satz in der natuerlichen Sprache
- Wahr oder Falsch, ist gut auch wenn man nicht richtig weiss

- Aussagen koennen aus weitere Aussagen bestehen

- **atomare Aussage**: enthaelt nur einen einzigen Sachverhalt - unteilbare Aussage
- Aussage darf zwar mehrere Informationen enthalten, aber beschreibt nur einen Sachverhalt und kann nicht in meherere Aussagen aufgespalten werden 

- logische Operatoren: Negation ¬, Konjunktion ∧, Disjunktion ∨, Folgerung/Implikation →

## Implikation

- Wie haengen Aussagen zussamen?
- A impliziert B, wenn A dann B

A -> B ist falsch nur dann, wenn A wahr ist und B falsch ist,
sonst ist es richtig

![[implikation_wahrheitstabelle.png]]

## Aequivalenz

- Wie haengen Aussagen zusammen?
- A genau dann, wenn B

- A <-> B == A -> B ∧ B -> A

# **Hausuebung:** Beispiel, slide 28

# Beweise

- Kette von wahren Implikationen

### Beweis, dass A -> B gilt:

- **Direkter Beweis:** A -> C -> D -> E ... -> B
- **Widerspruchsbeweise:** A -> ¬B, eventuell kommt man bei beweisen von dieser Aussage zu einem Widerspruch

# Syntax der Aussagenlogik

## Induktive Definition

- A - Menge von Atomen / Grundelementen

- A ⊆ L
- wenn x,y ∈ L dann ist auch f(x,y) ∈ L
- wenn x1, ... xn ∈ L, dann ist auch g(x1... xn) ∈ L

## Aussagenlogische Formeln - Syntax

![[syntax.png]]

# Semantik der Aussagenlogik

- definiert ueber Wahr oder Falsch
- Aussagenlogik ist damit eine zweiwertige Logik

**Der Wahrheitswert einer Formel wird in Abhaengigkeit von den Wahrheitswerten der atomaren Formeln berechnet**

- α^(F) = Wahrheitswert von F

![[logische_operatoren.png]]

## Funktionale Vollstaendigkeit

Die Menge X ist funktional vollstaendig, falls es auch alle andere Operatoren nur mit Hilfe von Operatoren aus X ausdruecken laesst

![[funktionelle_vollstaendigkeit.png]]

### Modelle - Semantik

Semantik einer Formel = Wahrheitswert
![[modelle_semantik.png]]
# Zuhause: Auswerten von (A und nonB) -> (1=0) -> (A->B)

![[definitionen_zusammenfassung.png]]

## Formalisieren in Aussagenlogik

- Atomare Aussagen identifizieren
- Phrasen wie nicht, und, oder, wenn .. dann, usw. erkennen

B1:
- A -> B
- B -> non C
- A
- C
- Sind sie konsistent? (A -> B) und (B -> non C) und A und C

Die Formel hat kein Model -> die Aussagen sind widerspruechlich

≡ semantische aequivalenz

**Bei -> und <-> klammern benutzen!**

# Kalkuel

Syntax verwenden ohne Semantik und Schlussfolgerungen aus Formeln ziehen

{{A,B}, {C}} - Klauselmenge, {A,B} ist ne Klausel

leere Klausel {} = Wahrheitswert 0, auch {{}} = Wahrheitswert 0

{{}, {A,B,C,}} auch Wahrheitswert 0

Eine Klauselmenge ist falsch, wenn mindestens eine Konjunktion drinnen ist falsch

Folie 85: die Klausel {B,C} koennen wir einfach dazu schreiben, denn wenn B oder C wahr ist, dann muss auch die ganze Formel wahr sein => es aendert die Erfuellbarkeit der Formel ned

### Resolventen finden:

Res 0 (K ) = {{¬P, H, C }, {¬P, ¬H}, {P}, {¬C }}

**Alle moegliche Paare vergleichen:**
- Erstes und zweites: H und nonH weg, bleibt {nonP, C (und theoretisch noch nonP, aber das bringt nichts)}
- Erstes und drittes Paar: P und nonP weg, bleibt {H, C}
- Erstes und viertes Paar: C und nonC weg, bleibt {nonP, H}

Wiederhole bis du die leere Klausel erreichst: dann ist die Formel unerfuellbar.

Folie 104 Zuhausestudium