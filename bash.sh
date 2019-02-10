rm -r build/*
rm -r lib/build/*

echo "----------Build library"
cd lib/build
cmake ..
make

echo "----------Build target main function"
cd ..
cd ..
cd build
cmake ..
make

