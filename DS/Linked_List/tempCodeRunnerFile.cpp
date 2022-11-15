
    node *node1 = new node(1);
    node *head = node1;
    node *tail = node1;

    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, -1);
    insertAtHead(head, tail, -2);
    insertAtHead(head, tail, -3);
    print(head);

    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);
    print(head);

    insertAtPosition(head, tail, 10, 2);
    print(head);