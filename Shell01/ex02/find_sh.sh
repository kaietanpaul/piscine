find . -type f -name "*.sh" -not -type d -exec basename {} \; | sed 's/\.sh$//'
