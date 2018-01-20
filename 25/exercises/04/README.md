### Exercise 25.04

Give a C string literal that represents each of the following phrases. Assume
that the characters à, è, é, ê, î, ô, û and ü are represented by single-byte
Latin-1 characters (You'll need to look up the Latin-1 code points for these
characters). For example, the phrase *déjà vu* could be represented by the
string `"d\xe9j\xe0 vu"`.

(a) *Côte d'Azur*  
(b) *crème brûlée*  
(c) *crème fraîche*  
(d) *Fahrvergnügen*  
(e) *tête-à-tête*

### Solution

(a) `C\xf4te d'Azur`  
(b) `cr\xe8me br\xfbl\xe9e`  
(c) `cr\xe9me fra\xeeche`  
(d) `Fahrvergn\xfcgen`  
(e) `t\xeate-\xe0-t\xeate`
