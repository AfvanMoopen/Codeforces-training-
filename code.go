package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func next(scn *bufio.Scanner) string {
	scn.Scan()
	return scn.Text()
}

func nextInt(scn *bufio.Scanner) int {
	i, _ := strconv.Atoi(next(scn))
	return i
}

func main() {
	scn := bufio.NewScanner(os.Stdin)
	scn.Split(bufio.ScanWords)

	n := nextInt(scn)
	s := next(scn)
	x := make([]int, n)
	y := make([]int, n)
	for i := 0; i < n; i++ {
		x[i] = nextInt(scn)
		y[i] = nextInt(scn)
	}

	// solve here

	fmt.Println(n)
	fmt.Println(s)
	fmt.Println(x[0])
	fmt.Println(y[n-1])
}

func solve(n int) int {
	return 0
}