p1 = ["hello","goodbye"]

p2 = p1!1

p3 = map (3:)

first (a,b) = a
p4 = (foldr (*) 1) . map first

p5 a b = "lengths greater than 2", if #a > 2 & #b > 2
       = "not greater than 2", otherwise
p6 a b = a, if a!0 >= b!0
       = b, otherwise

p7 0 = [0]
p7 a = a : p7(a-1)

p8 [] = []
p8 (a:as) = a + 3 : p8 as

square n = n * n
p9 = square . sum . map square

p10 a = [b!0 | b <- a]

2.1 a. ['a','b','c']
2.1 b. [(1,'a')]
2.2 a. s ∩ t = {x | x Є s & x Є t}
2.2 b. s ⊆ t = True iff œx x Є s -> x Є t 
2.4 {(‘s’,’a’,’s’),(‘s’,’a’,’p’),(‘s’,’o’,’s’),(‘s’,’o’,’p’), (‘p’,’a’,’s’),(‘p’,’a’,’p’),(‘p’,’o’,’s’),(‘p’,’o’,’p’)} 
2.5 a. (a,a) (b,b) (c,c) (d,d) (e,e) 
2.5 b. (a,c)

p1 = ‘a’

p2 = (p1, 5)

end (x:xs) = xs
p3 = map end 

p4 = foldr (+) 0 . map (^2) 

p5 (a,b) (c,d) = “yes”, if (a + c) > 5 
               = “no”, otherwise 

p6 a b = a!0, if #a >= #b 
       = b!0, otherwsie 

p7 [] = [] 
p7 ((a,b):xs) = (a * b) : p7 xs

p8 = sum . map sum . map p7 

p9 a = [ x*x | x <- a; 5 < x < 20] 

2.1 a. [[1,2],[3,4]]
2.1 b. [1,['a','b']]
2.2 a. s = t, iff Ʉx x Є s -> x Є t &  x Є t -> x Є s






