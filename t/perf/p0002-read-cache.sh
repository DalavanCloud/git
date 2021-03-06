#!/bin/sh

test_description="Tests performance of reading the index"

. ./perf-lib.sh

test_perf_default_repo

count=1000
test_perf "read_cache/discard_cache $count times" "
	test-tool read-cache $count
"

test_perf "read_cache/discard_cache $count times with core.gvfs flag on" "
	git config core.gvfs 1
	test-read-cache $count
"
test_done
