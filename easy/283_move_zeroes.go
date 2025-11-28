package main

import "fmt"

func moveZeroes(nums []int) {
	nonZero := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] != 0 {
			//basically remove the zero and append the zero at the end!
			nums[nonZero], nums[i] = nums[i], nums[nonZero]
			fmt.Print(nums)
			nonZero++
		}
	}
}

func main() {
	nums := []int{0, 1, 0, 3, 12}
	moveZeroes(nums)
}
