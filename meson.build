project('calt', 'c',
  version : '0.0.0.1',
  default_options : [
    'warning_level=3',
    'c_std=c11',
    'werror=true',
    'b_ndebug=if-release'
  ])

inc = include_directories('include')

subdir('include')
subdir('src')

lib = library(meson.project_name(), src, header,
  install : true,
  include_directories : inc,
)

calt = declare_dependency(
  include_directories: inc,
  link_with : lib)

if get_option('enable_test')
  subdir('test')
endif

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : meson.project_name(),
  filebase : meson.project_name(),
  description : 'A C library that is to implement extend and be an alternative to the C stadard library',
  subdirs : 'calt',
  libraries : lib,
  version : meson.project_version(),
)
