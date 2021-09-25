mkdir -p gcm.cache

# remove gcc module caches in case they were added by mistake
rm -rf engine/gcm.cache/
rm -rf testgame/gcm.cache/

# create symbolic links so that all projects use the same module cache
CURDIR=$(pwd)
cd engine/
ln -fs ../gcm.cache gcm.cache

cd ../testgame/
ln -fs ../gcm.cache gcm.cache
