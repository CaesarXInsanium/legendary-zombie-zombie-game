project('raylibtest', 'c',
  version: '0.0.1',
  default_options: ['warning_level=3'])

project_dependecies = [
  dependency('raylib')
  ]
# compile_commands.json should be placed in directory named build
project_sources = [
  'src/main.c',
  'src/draw.c',
  'src/game.c',
  'src/map.c',
  'src/world.c',
  'src/zombie.c',
  ]

build_args = [
  '-Wall',
  '-Werror',
  '-g3',
  '-pedantic'
  ]

project_target = executable(
  'result',
  project_sources,
  dependencies: project_dependecies,
  c_args : build_args,
  include_directories: ['include']
  )
