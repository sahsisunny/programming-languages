# Explicit Type Conversion
x = 10
y = 4.2
value = x + y
st = "Hello XPRO"

int_value = int(value)  # Explicit Type Conversion
float_value = float(value)  # Explicit Type Conversion
complex_value = complex(value)  # Explicit Type Conversion
str_value = str(value)  # Explicit Type Conversion
tuple_st = tuple(st)  # Explicit Type Conversion
list_st = list(st)  # Explicit Type Conversion
bin_x = bin(x)  # Explicit Type Conversion
oct_x = oct(x)  # Explicit Type Conversion
hex_x = hex(x)  # Explicit Type Conversion

print(int_value)
print(float_value)
print(complex_value)
print(str_value)
print(list_st)
print(tuple_st)
print(bin_x)
print(oct_x)
print(hex_x)

print(type(int_value))
print(type(float_value))
print(type(complex_value))
print(type(str_value))
print(type(tuple_st))
print(type(list_st))
print(type(bin_x))
print(type(oct_x))
print(type(hex_x))
