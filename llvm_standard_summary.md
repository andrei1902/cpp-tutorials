* Indentation: Use two spaces for indentation, and avoid using tabs. Indentation should be consistent and used to indicate block structure.
* Line Length: Limit lines to a maximum of 80 characters to ensure readability on various displays and editors.
* Naming Conventions: Use descriptive names for variables, functions, classes, and other identifiers. Follow CamelCase naming convention for types and functions, and use underscore_separated_words for variables and functions.
* Comments: Use Doxygen-style comments for documenting code, including function descriptions, parameter descriptions, and usage examples. Avoid unnecessary comments and keep comments up-to-date with the code.
* Headers: Use proper header guards to prevent multiple inclusion of headers. Include only the necessary headers and avoid including unnecessary headers.
* Classes: Follow the LLVM class layout conventions, which specify the order of class members and access specifiers.
* Pointers and References: Use smart pointers or references instead of raw pointers whenever possible to manage memory safely and avoid memory leaks.
* Control Flow: Use braces for all control flow statements, including single-line blocks, to improve readability and prevent bugs.
* Error Handling: Use LLVM error handling conventions, which involve using Expected and Error types to handle errors in a consistent and structured manner.
* Macros: Limit the use of macros and follow the LLVM macro naming conventions when necessary.