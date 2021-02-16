# App

# Set names of needed components
set(TARGET "${APP}")

# Add files for the build process
set(SOURCES
        "main.cpp"
)

# Create and configure target
add_executable(${TARGET}
        ${SOURCES}
)
target_link_libraries(${TARGET}
        ${LIBRARY_CORE}
)
target_include_directories(${TARGET} 
        PUBLIC 
                .
)