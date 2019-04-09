Intel safestringlib
==========================

#### 1.fixup strtok_s and strcmp_s bugs

#### 2.Makefile supports the generations of libsafestring.so

gcc:

    export LD_LIBRARY_PATH=/ome/sunkang/devel/safestingrlinglib/
    gcc -o test_raw test_raw.c -L /home/sunkang/devel/safestringlib/ -lsafestring
    ./test_raw

spec 2006:
      
      CC  = /home/sunkang/llvm/xudaliang/Mini-Fat/build/bin/clang -fsanitize=lowfat -mllvm -lowfat-no-abort -mllvm -lowfat-check-whole-access -mllvm -lowfat-no-check-blacklist=blacklist.txt -Wl,-Bdynamic -L /home/sunkang/devel/safestringlib/ -lsafestring -lgcc_s -g
