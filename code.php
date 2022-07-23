<?php
function println($s) {
	print $s . PHP_EOL;
}

function main() {
	$n = trim(fgets(STDIN));
	$s = trim(fgets(STDIN));
	$x = array_fill(0, $n, 0);
	$y = array_fill(0, $n, 0);
	foreach (range(0, $n - 1) as $i) {
		list($x[i] , $y[i]) = explode(' ', trim(fgets(STDIN)));
	}
	println($n);
    println($s);
    println($x[0]);
    println($y[$n - 1]);

}

function solve(int $n) {
	return 0;

}

main();

?>