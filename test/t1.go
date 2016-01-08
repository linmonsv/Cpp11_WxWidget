package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "XZ0009571|630102199104090044|曹瓅沄|"
	fmt.Println(str)
	result := strings.Split(str, "|")
	for _, one := range result {
		fmt.Println(one)
	}
}
