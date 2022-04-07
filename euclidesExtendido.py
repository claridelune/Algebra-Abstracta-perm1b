def euclidesExt(a, b): #retorna el mcd, x & y
    if b == 0:
        return (a, 1, 0)
    else:
        (d, dx, dy) = euclidesExt(b, a % b)
        (x, y) = (dy, dx - a//b * dy)
        return (d, x, y)

if __name__ == "__main__":
    print(euclidesExt(13, 8))
    print(euclidesExt(991, 997))