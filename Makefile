
build/cache/module-0.0.0-headers.zip: include/*.h
	mkdir -p build/cache
	cd include && zip ../build/cache/module-0.0.0-headers.zip *.h