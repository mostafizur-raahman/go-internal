package main

import "fmt"

func calc() (result int) {
	fmt.Println("--------------start-----------")
	ans := func(n int) {
		result = result + n                // 10
		fmt.Printf("defer 1 %d\n", result) // 10
		secondAns := func() {
			result := n + 10
			fmt.Println("defer 2", result) // 20
		}
		defer secondAns()
	}
	defer ans(10)

	result = result + 100

	fmt.Println("--------------end-----------")

	return
}
func main() {

	init := calc()
	fmt.Printf("init-----------> %d\n", init)
	fmt.Println("first")

	res := func() {
		fmt.Println("second")
		defer fmt.Println("third")
	}

	defer res()

	fmt.Println("4")
}
