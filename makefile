all: build upload serial

build:
	ino build

upload: build
	ino upload

serial:
	ino serial
