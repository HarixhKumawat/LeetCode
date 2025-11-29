package main

import "fmt"

func isVowl(c byte) bool {
	switch c {
	case 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U':
		return true
	default:
		return false
	}
}
func reverseVowels(s string) string {
	b := []byte(s)
	left, right := 0, len(b)-1

	for left < right {
		leftV, rightV := isVowl(b[left]), isVowl(b[right])

		if !leftV {
			left++
			continue
		}
		if !rightV {
			right--
			continue
		}

		b[left], b[right] = b[right], b[left]
		left++
		right--
	}

	return string(b)
}

func main() {
	v := "leetcode"
	ans := reverseVowels(v)

	fmt.Print("Ans is: ", ans)
}
