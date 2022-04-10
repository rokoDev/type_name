include(FetchContent)

# Setup directory to which dependencies will be downloaded
get_filename_component(deps_content "../deps_content"
                       REALPATH BASE_DIR "${CMAKE_BINARY_DIR}")
set(FETCHCONTENT_BASE_DIR ${deps_content})

# If dependencies are not available then download it and make available
FetchContent_Declare(
	fmt
	GIT_REPOSITORY https://github.com/fmtlib/fmt.git
	GIT_TAG        c55175a58906934416adf5fc5b820fcbb60ea6d1
)

# If necessary it's possible to use VersionHelper from different location instead of downloaded from GitHub
# string(TOUPPER VersionHelper UP_VersionHelper)
# set(FETCHCONTENT_SOURCE_DIR_${UP_VersionHelper} ${CMAKE_CURRENT_LIST_DIR}/../../VersionHelper)

FetchContent_MakeAvailable(fmt)

# If use IDE add fmt target into deps source group
set_target_properties(fmt PROPERTIES FOLDER deps)