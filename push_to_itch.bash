#!/usr/bin/env bash

#change me
set GAME my_game
set USERNAME me

cd em_build/bin
mv ${GAME}.html index.html
rm -f *zip
zip ${GAME}.zip *
~/Documents/repos/butler/butler push ZIP_NAME.zip ${USERNAME}/${GAME}:html5
