Eine Sprache L über ein Alphabet A ist eine Teilmenge L (echte Teilmenge) von A*

Die Syntax einer Programmiersprache wir in der Regel durch eine kontextfreie Grammatik beschrieben.
Die Semantik einer Programmiersprache ordnet den Element der Sprache eine Bedeutung zu.

# Kontextfreie Grammatiken

Eine kontextfreie Grammatik besteht aus 4 Komponenten:
- N: Menge von Nonterminalsymbole oder Variable - Menge von Zeichenketten
- Σ: Menge von Terminalsymbole - Alphabet der Sprache
- Regeln oder Produktionen P - mit denen man rekursiv die Sprache definiert
- Eine Startvariable, mit der man mit den Produktionen beginnt

G = (N, Σ, P, S)
L = {+, ++, +++, ++++...}
Σ = {+}
P = {S -> +, S -> +S} = { S -> + | +S }
N = {S}

Möglicherweise können wir auch mehrere P haben.

Σ enthält auf keinem Fall ε

# Ableitungsbaum

Jedes Blatt - inneres Knot darf nur ein Zeichen sein, keine Zeichenkette

**gdw** genau dann, wenn...

bis Mehrdeutigkeit