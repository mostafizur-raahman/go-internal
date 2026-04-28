package main

import (
	"fmt"
	"time"
)

func busyLoop() {
	for {
		// tight CPU loop with no calls into the runtime
	}
}

func background() {
	for i := 0; i < 5; i++ {
		fmt.Println("Background work", i)
		time.Sleep(200 * time.Millisecond)
	}
}

func Abc() {
	go busyLoop()
	go background()
	time.Sleep(2 * time.Second)
}
