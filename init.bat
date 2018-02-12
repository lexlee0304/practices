set dirname = "E"

for /l %%i in (1,1,22) do (
    if not exist E%%i (
        md E%%i
    )
    cd E%%i
    if not exist lib (
        md lib
    )
    if not exist answers.h (
        echo ""> answers.h
    )
    if not exist main.cpp (
        echo ""> main.cpp
    )
    if not exist answers.cpp (
        echo ""> answers.cpp
    )
    if not exist Makefile (
        copy ../E2/Makefile  Makefile
    )
    cd ..
)