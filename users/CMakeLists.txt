project(users)
corrosion_import_crate(MANIFEST_PATH userage/Cargo.toml)

add_library(users User.cpp user.h)
target_link_libraries(users PUBLIC userage)