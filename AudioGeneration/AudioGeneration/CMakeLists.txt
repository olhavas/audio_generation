#  CMake
cmake_minimum_required(VERSION 3.10)
project(AudioGenerationProject)

# Set the C++ standard
set(CMAKE_C_COMPILER "/opt/homebrew/Cellar/gcc/14.2.0_1/bin/gcc-14")
set(CMAKE_CXX_COMPILER "/opt/homebrew/Cellar/gcc/14.2.0_1/bin/g++-14")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Path to LibTorch
set(Torch_DIR "/opt/homebrew/Cellar/pytorch/2.5.1_4/share/cmake/Torch")

# Path to Essentia
# set(ESSENTIA_DIR "/opt/homebrew/opt/essentia/install")

# Include LibTorch
find_package(Torch REQUIRED)

# Include Essentia
# find_package(Essentia REQUIRED CONFIG
 #    PATHS ${ESSENTIA_DIR}
  #   NO_DEFAULT_PATH)

# Include directories for your headers
include_directories(include)
# include_directories(${ESSENTIA_DIR}/include)



# Add source files
set(SOURCES
    main.cpp
    include/options.h

)

# Create executable
add_executable(AudioGeneration ${SOURCES})

# Link LibTorch libraries
target_link_libraries(AudioGeneration "${TORCH_LIBRARIES}")

# Link Essentia libraries
# target_link_directories(AudioGeneration PRIVATE "${ESSENTIA_DIR}/lib")
# target_link_libraries(AudioGeneration essentia essentia_samplerate)

# Enable LibTorch's parallelism
set_property(TARGET AudioGeneration PROPERTY INTERFACE_COMPILE_OPTIONS "-D_GLIBCXX_USE_CXX14_ABI=1")
