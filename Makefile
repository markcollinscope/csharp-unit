
slides:
	cd

clean::
	for i in $(find . -name \*.html); do \
		rm $i; \
	done
