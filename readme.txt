Updated all the repos, to sync, download the file:

sync_sources.sh

it will download all the repos (and retry in case of failure) and put them in the right order

just go

sh sync_sources.sh


device to compile:
-./mk -o=TARGET_BUILD_VARIANT=user itek72_cwet_kk new
