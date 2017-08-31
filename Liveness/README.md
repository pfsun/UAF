
Requirements:
* LLVM 4.0

Patch to LLVM: 
* Patch to llvm-4.0.0.src/lib/Transforms/Livness
* Patch add_subdirectory(Liveness) to llvm-4.0.0.src/lib/Transforms/CMakeFiles.txt

Build:
* Follow LLVM build instruction: https://llvm.org/docs/GettingStarted.html

How to use plugin:
* bin/clang -c -Xclang -load -Xclang lib/LLVMLiveness.so linked_list.c &> linked_list_liveness.txt

