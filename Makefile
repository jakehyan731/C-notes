all: 
	rm -f *.fls
	rm -f *.log
	rm -f *.bbl
	latexmk -c
	latexmk -pdf C-notes-ru.tex
	makeglossaries C-notes-ru
	latexmk -pdf C-notes-ru.tex
	latexmk -c
	latexmk -pdf C-notes-en.tex
	makeglossaries C-notes-en
	latexmk -pdf C-notes-en.tex
