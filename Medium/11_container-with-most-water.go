package main

import "fmt"

func maxArea(height []int) int {
	max := 0
	left := 0
	right := len(height) - 1

	for left < right {
		width := right - left
		h := height[left]

		if height[right] < h {
			h = height[right]
		}

		area := width * h

		if area > max {
			max = area
		}

		if height[left] < height[right] {
			left++
		} else {
			right--
		}
	}

	return max
}

func main() {
	height := []int{1, 8, 6, 2, 5, 4, 8, 3, 7}
	ans := maxArea(height)

	fmt.Print("Ans is: ", ans)
}
