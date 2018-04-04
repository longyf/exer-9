# exer-9

Use two stacks to form a queue.
两个栈，stack1和stack2。插入一个元素的时候，可以放在stack1的结尾，删除首元素的时候，可以先把stack1中的元素逐个删除再逐个插入到stack2中，直至stack1为空，从stack2中删除首元素。如果还是插入元素，依然插入到stack1中。如果想删除队首元素，就判断stack2是否为空，如果不为空，就弹出栈顶元素，如果为空，就把stack1中的元素推到stack2中。
