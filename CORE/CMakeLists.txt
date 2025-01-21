
# 头文件路径
include_directories(CORE)

# 源文件
set(CORE_SOURCES 
    stratup.c
    system_stm32f4xx.c
)

# 生成库
add_library(CORE_LIB STATIC ${CORE_SOURCES})