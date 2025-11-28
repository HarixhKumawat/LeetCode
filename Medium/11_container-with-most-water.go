package main

import "fmt"

func maxArea(height []int) int {
	max := 0

	for i := 0; i < len(height); i++ {
		for j := i + 1; j < len(height); j++ {
			h := height[i]
			if height[j] < height[i] {
				h = height[j]
			}
			distance := j - i
			area := h * distance

			if area > max {
				max = area
			}
		}
	}
	return max
}

func main() {
	height := []int{1, 8, 6, 2, 5, 4, 8, 3, 7}
	ans := maxArea(height)

	fmt.Print("Ans is: ", ans)
}
