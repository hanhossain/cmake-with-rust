cmake_minimum_required(VERSION 3.24)
project(cmake_with_rust)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)

FetchContent_Declare(
    Corrosion
    GIT_REPOSITORY https://github.com/corrosion-rs/corrosion.git
    GIT_TAG v0.3.2 # Optionally specify a commit hash, version tag or branch here
)
# Set any global configuration variables such as `Rust_TOOLCHAIN` before this line!
FetchContent_MakeAvailable(Corrosion)

corrosion_import_crate(MANIFEST_PATH pythagorean/Cargo.toml)

add_subdirectory(users)

add_executable(cmake_with_rust main.cpp)
target_link_libraries(cmake_with_rust PUBLIC pythagorean users)
