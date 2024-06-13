
# Declare mt 3x3 matrix
mt = [[0 for _ in range(3)] for _ in range(3)]

# Input values into the matrix
print("Enter 9 integers for the matrix:")
for i in range(3):
    for j in range(3):
        mt[i][j] = int(input(f"Enter value for mt[{i}][{j}]: "))

# Output the matrix
print("The 3x3 matrix is:")
for i in range(3):
    for j in range(3):
        print(mt[i][j], end=' ')
    print()  # Newline after each row
