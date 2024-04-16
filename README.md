## Setup Debuging for C Language (MAC)

### topic
- variable
- data type
- condition
- loop
- string
- array

อ้างอิง : https://code.visualstudio.com/docs/cpp/config-clang-mac

### launch.json

```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "C++ Launch (LLDB)",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}/${fileBasenameNoExtension}",
      "args": [],
      "stopAtEntry": true, // แก้เป็น true ถ้าต้องการให้หยุดที่ main
      "cwd": "${fileDirname}",
      "environment": [],
      "externalConsole": false,
      "MIMode": "lldb", // window is gbd, mac is lldb
      "preLaunchTask": "C/C++: gcc build active file"
    }
  ]
}
```

### tasks.json

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "C/C++: gcc build active file",
      "type": "shell",
      "command": "/usr/bin/gcc",
      "args": [
        "-g", // ต้องใส่ -g ถึงจะสามารถ debug ได้
        "${file}",
        "-o",
        "${fileBasenameNoExtension}"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": ["$gcc"],
      "detail": "Generated task by Debugger."
    }
  ]
}
```

### Format String in C

อ้างอิง : https://www.geeksforgeeks.org/format-specifiers-in-c/

| Format Specifier | Description                                |
| ---------------- | ------------------------------------------ |
| Juicy Apples     | 1.99                                       |
| %c               | For character type                         |
| %d               | For signed integer type.                   |
| %e or %E         | For scientific notation of floats.         |
| %f               | For float type.                            |
| %g or %G         | For float type with the current precision. |
| %i               | Unsigned integer                           |
| %ld or %li       | Long                                       |
| %lf              | Double                                     |
| %Lf              | Long double                                |
| %lu              | Unsigned int or unsigned long              |
| %lli or %lld     | Long long                                  |
| %llu             | Unsigned long long                         |
| %o               | Octal representation                       |
| %p               | Pointer                                    |
| %s               | String                                     |
| %u               | Unsigned int                               |
| %x or %X         | Hexadecimal representation                 |
| %n               | Prints nothing                             |
| %%               | Prints % character                         |

### การจองพื้นที่หน่วยความจำ (Memory Allocation) ด้วย Pointer
- malloc
- calloc
- realloc
- free
