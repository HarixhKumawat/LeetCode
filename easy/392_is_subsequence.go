package main

import "fmt"

func isSubsequence(s string, t string) bool {
	if len(s) == 0 {
		return true
	}

	currPos := 0

	for i := 0; i < len(t); i++ {
		if t[i] == s[currPos] {
			currPos++
		}

		fmt.Print(currPos)
		if currPos >= len(s) {
			return true
		}
	}

	return false
}

func main() {
	ans := isSubsequence("axc", "ahbgdc")

	fmt.Print("Answer is: ", ans)
}
