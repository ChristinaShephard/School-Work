p1 = "21"

p2 = "Christina Shephard"

p3 n = n * 2

p4 n r = n, if n >= r
       = r, if n < r

p5 n = map (*2) n

p6 n = n!0

p7 n = foldr (*)1 n

p8 0 = 1
p8 n = n * p8 (n-1)

p9 n r = n -- (n -- r)


p10 x = foldr rev [] x
	where rev x (xs) = xs ++ [x]

p11 0 = True
p11 1 = False
p11 n = p11 (n - 2)

p12_1 (x,y) = x
p12 = foldr (+) 0 . map p12_1
