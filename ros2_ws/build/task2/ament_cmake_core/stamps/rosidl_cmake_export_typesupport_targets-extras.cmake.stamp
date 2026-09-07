# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:task2__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:task2__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:task2__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:task2__rosidl_typesupport_c;__rosidl_generator_cpp:task2__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:task2__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:task2__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:task2__rosidl_typesupport_cpp;__rosidl_generator_py:task2__rosidl_generator_py")

# populate task2_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "task2::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'task2' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND task2_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
