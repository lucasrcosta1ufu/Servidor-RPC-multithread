/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "rpc.h"
int 
main (int argc, char *argv[]) {
	Socket_info *socket_data;

	if (argc < 2) {
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}

	create_socket(&socket_data);
    process_choice(socket_data);    
    
    // Close the socket:
    close(socket_data->socket_created);
    
    return 0;
}

/**
 * @brief Provide a sequence of operations and its respective processing
 * 
 * @param socket_data 
 */
void 
process_choice (Socket_info *socket_data) {
	bool retval = false;
	int result, choice;
	operandos op_arg;

    while (1) {
		choice = options(&op_arg);
		switch (choice) {
		case 1:
            socket_data->operation = choice;
            
			retval = send_operation(&op_arg, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;

			retval = recv_operation(&result, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;

			printf("%d + %d = %d",op_arg.a,op_arg.b,socket_data->result);
			break;

		case 2:
            socket_data->operation = choice;

			retval = send_operation(&op_arg, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;

			retval = recv_operation(&result, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;

			printf("%d - %d = %d",op_arg.a,op_arg.b,socket_data->result);
			break;

		case 3:
            socket_data->operation = choice;

			retval = send_operation(&op_arg, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;
			
			retval = recv_operation(&result, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;

			printf("%d * %d = %d",op_arg.a,op_arg.b,socket_data->result);
			break;

		case 4:
            socket_data->operation = choice;

			retval = send_operation(&op_arg, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;
			
			retval = recv_operation(&result, socket_data);
			if (!retval) {
				print("call failed");
			} else retval = false;

			printf("%d / %d = %d",op_arg.a,op_arg.b,socket_data->result);
			break;

		case 5:
            print("See you later!\n");
            exit(0);

		default:
			print("Command invalid.");
			break;
		}
	}
}

/**
 * @brief Display all the operations that the user has to choose
 * 
 * @param op 
 * @return int 
 */
int 
options (operandos *op) {
	int choice;
    print("\n");
    print("***** Choose an option ******");
    print("(1). Sum two numbers");
    print("(2). Subtract two numbers ");
    print("(3). Multiply two numbers");
    print("(4). Divide two numbers");
    print("(5). Quit");
    print("*****************************");
    
	printf("Type an option => ");
	scanf("%d",&choice);
	if(choice < 5) {
		printf("First number => ");
		scanf("%d", &op->a);
		printf("Second number => ");
		scanf("%d", &op->b);
	}

	return choice;
}