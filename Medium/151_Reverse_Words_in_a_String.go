package main

import (
	"bytes"
	"fmt"
	"strings"
)

func reverseWords(s string) string {
	arrayOfS := strings.Split(strings.TrimSpace(s), " ")
	var ans bytes.Buffer
	for i := len(arrayOfS) - 1; i >= 0; i-- {
		word := arrayOfS[i]
		if word == "" {
			continue
		}
		fmt.Println("." + word + ".")
		ans.WriteString(" " + word)
	}
	return ans.String()[1:]
}

func main() {
	fmt.Print(reverseWords("  hello world  ") + "\n")
}
