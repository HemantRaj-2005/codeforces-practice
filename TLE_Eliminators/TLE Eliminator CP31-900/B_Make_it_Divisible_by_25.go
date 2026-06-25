package main

import (
	"fmt"
	"strconv"
)

func solve() {
	var n int64
	fmt.Scan(&n)
	s := strconv.FormatInt(n, 10)
	sz := len(s)
	var best int64
	best = 1e18

	patterns := []string{"00", "25", "50", "75"}

	for _, p := range patterns {
		var second int64
		var first int64
		second = -1
		first = -1

		for i := sz - 1; i >= 0; i-- {
			if second == -1 && s[i] == p[1] {
				second = int64(i)
			} else if second != -1 && s[i] == p[0] {
				var between int64
				var after int64
				first = int64(i)
				between = second - first - 1
				after = int64(sz) - second - 1

				if between+after < best {
					best = between + after
				}
				break
			}
		}
	}

	fmt.Println(best)
}

func main() {
	var t int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		solve()
	}
}