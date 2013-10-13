all: 
	rm -f *.fls
	rm -f *.log
	latexmk -c
	latexmk -pdf C-notes-ru.tex
	#latexmk -c
	#latexmk -pdf C-notes-en.tex
