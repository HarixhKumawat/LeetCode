package main

import (
	"fmt"
)

func ifBiggest(candies *[]int, no int) bool {
	for _, candiNo := range *candies {
		if no < candiNo {
			return false
		}
	}
	return true
}

func kidsWithCandies(candies []int, extraCandies int) []bool {
	var ans []bool
	for _, candie := range candies {
		//log.Println(candie + extraCandies)
		ans = append(ans, ifBiggest(&candies, candie+extraCandies))
	}
	return ans
}

func main() {
	var candies = []int{12, 1, 12}
	ans := kidsWithCandies(candies, 10)
	for _, ann := range ans {
		fmt.Printf("its %v\n", ann)
	}
}
