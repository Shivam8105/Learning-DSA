class twoStacks {
  public:
  int arr[100];
  int top1,top2;

    twoStacks() {
        top1 = -1;
        top2 = 100;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top1 + 1 == top2) return;
        top1++;
        arr[top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // code here
        if(top1 + 1 == top2) return;
        top2--;
        arr[top2] = x;
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        if(top1 == -1) return -1;
        return arr[top1--];
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2 == 100) return -1;
        return arr[top2++];
    }
};