package main

import (
	"fmt"
	"os"
)

func main() {
	args := os.Args
	if len(args) < 2 {
		fmt.Println("No Arguments")
	} else {
		for _, a := range args {
			fmt.Printf("Arg: %s\n", a)
		}
	}
}
