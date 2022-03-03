#TargetName : Dependencies
#<TAB>commands

Build : project_main.c converter.c
     gcc project_main.c converter.c -o converter.out

Run : converter.out
      ./converter.out

static_analysis:
   cppcheck --enable=all $(SRC)

dynamic_analysis: Build
   valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a src/project_main.c src/converter.c


Clean:
     rm -rf *.o *.out *.i *.s 