p1 = [[1,2],[2,3]]
p2 = p1!1
p3 = map (^3)
p4 = foldr (+) 0
p5 a b =a, if a >= 0
       =b, otherwise
p6 a b = a, if a!0 > b!0
       =b, otherwise
p7 0 = True
p7 1 = False
p7 n = p7 (n-3)
p8 [] n = False
p8 (x:xs) n = True, if x = n \/ p8 xs n
            = False, otherwise
p9 = p4 . p3
p10 n m = [(x,y)|x <- n; y <- m; x > y]