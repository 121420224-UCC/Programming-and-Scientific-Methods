# Practical 4

# Compile:
* gcc -o area area.c -lm

# Execute:
* ./area

#Output:

# Array from 0 -60 
Deg: 0.000 || Rad: 0.000 || Array entry 000: 0.000000
Deg: 5.000 || Rad: 0.087 || Array entry 001: 0.087489
Deg: 10.000 || Rad: 0.175 || Array entry 002: 0.176327
Deg: 15.000 || Rad: 0.262 || Array entry 003: 0.267949
Deg: 20.000 || Rad: 0.349 || Array entry 004: 0.363970
Deg: 25.000 || Rad: 0.436 || Array entry 005: 0.466308
Deg: 30.000 || Rad: 0.524 || Array entry 006: 0.577350
Deg: 35.000 || Rad: 0.611 || Array entry 007: 0.700208
Deg: 40.000 || Rad: 0.698 || Array entry 008: 0.839100
Deg: 45.000 || Rad: 0.785 || Array entry 009: 1.000000
Deg: 50.000 || Rad: 0.873 || Array entry 010: 1.191754
Deg: 55.000 || Rad: 0.960 || Array entry 011: 1.428148
Deg: 60.000 || Rad: 1.047 || Array entry 012: 1.732051

# Output from trap\_area function (0-60 degrees, N=12) 

Delta N = 5.000000
New area at x(5.000000) = 1.907028
New area at x(10.000000) = 2.259682
New area at x(15.000000) = 2.795581
New area at x(20.000000) = 3.523521
New area at x(25.000000) = 4.456137
New area at x(30.000000) = 5.610837
New area at x(35.000000) = 7.011253
New area at x(40.000000) = 8.689452
New area at x(45.000000) = 10.689452
New area at x(50.000000) = 13.072959
New area at x(55.000000) = 15.929255

Trapezodial result: 0.695045
Real result: 0.693147
