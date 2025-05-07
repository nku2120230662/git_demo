# 定义变量（不缩进）
CXX = g++
TARGET = program
SRCS = main.cpp util.cpp
OBJS = $(SRCS:.cpp=.o)

# 默认目标（不缩进）
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)  # ← 这行前面必须是 Tab

# 编译 .cpp 为 .o（不缩进）
%.o: %.cpp
	$(CXX) -c $< -o $@           # ← 这行前面必须是 Tab

# 清理（不缩进）
clean:
	rm -f $(OBJS) $(TARGET)      # ← 这行前面必须是 Tab