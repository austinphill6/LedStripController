xwd -root | xwdtopnm -quiet | pamdepth 255 | sed -e '1,3d' | cat > ./echo.o
