find . -iname '*.sh' -type f -exec basename {} \; | sed 's/\.sh$//'
