package main

import "fmt"

func palindrom(s string, start int, end int) int {
	if start == end {
		return 1
	}
	if start > end {
		return 0
	}
	if start == end-1 {
		return 1
	}
	if s[start] == s[end] {
		fmt.Print("+1")
		return 2 + palindrom(s, start+1, end-1)
	} else {
		return max(palindrom(s, start+1, end), palindrom(s, start, end-1))
	}
}

func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	s := "aslodjflasjdflkjasdfglashjdflasjdlfj"
	i := palindrom(s, 0, len(s)-1)
	fmt.Println("")
	fmt.Println("**************************")
	fmt.Println(i)
}
