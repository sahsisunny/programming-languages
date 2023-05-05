# General Term
# Typecasting
### What is type casting?
Type casting is a process of converting a variable from one data type to another data type. It is also known as type conversion or type coercion. Type casting is done to explicitly convert a variable from one data type to another data type. It is done to avoid data loss or to perform some specific operations on the data.

#### There are two types of type casting:
* Implicit type casting
* Explicit type casting

#### Implicit type casting
Implicit type casting is done automatically by the compiler when there is no possibility of data loss. It is also known as automatic type casting or promotion. It is done when the data type of the variable is smaller than the data type of the expression. For example, when an integer is assigned to a float variable, the integer is automatically converted to float.

#### Syntax of implicit type casting
```float a=10;```
#### Example of implicit type casting
```c++
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    float b=a;
    cout<<b;
    return 0;
}
```
#### Output
```10```
#### Explicit type casting
Explicit type casting is done manually by the programmer when there is a possibility of data loss. It is also known as manual type casting or casting. It is done when the data type of the variable is larger than the data type of the expression. For example, when a float is assigned to an integer variable, the float is manually converted to integer.

#### Syntax of explicit type casting
```(cast-type) expression;```

#### Example of explicit type casting
```c++
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    float b=10.5;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    a=(int)b;
    cout<<"a="<<a<<endl;
    return 0;
}
```

#### Output
```a=10
b=10.5
a=10
```

### What is 1's complement?
1's complement is a bitwise operator that is used to invert all the bits of a number. It is also known as bitwise NOT operator. It is denoted by ~. It is used to perform bitwise operations on the bits of a number.

#### Syntax of 1's complement
```~expression;```

#### Example of 1's complement
```c++
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<"a="<<a<<endl;
    cout<<"~a="<<~a<<endl;
    return 0;
}
```

#### Output
```a=10
~a=-11
```

### What is 2's complement?
2's complement is a bitwise operator that is used to invert all the bits of a number and add 1 to it. It is also known as bitwise NOT operator. It is denoted by ~. It is used to perform bitwise operations on the bits of a number.

#### Syntax of 2's complement
```~expression;```

#### Example of 2's complement
```c++
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<"a="<<a<<endl;
    cout<<"~a="<<~a<<endl;
    return 0;
}
```

#### Output
```a=10
~a=-11
```

### What is 3's complement?
3's complement is a bitwise operator that is used to invert all the bits of a number and add 1 to it. It is also known as bitwise NOT operator. It is denoted by ~. It is used to perform bitwise operations on the bits of a number.

#### Syntax of 3's complement
```~expression;```

#### Example of 3's complement
```c++
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<"a="<<a<<endl;
    cout<<"~a="<<~a<<endl;
    return 0;
}
```

#### Output
```a=10
~a=-11
```

