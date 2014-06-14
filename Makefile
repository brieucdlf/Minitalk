NAMESERV	=	server/server

NAMECLIENT	=	client/client

LIB		=	make -C lib/

CC		=	gcc

RM		=	rm -f

SRCSSERV	=	server/main.c

SRCSCLIENT	=	client/main.c

OBJSSERV	=	$(SRCSSERV:.c=.o)

OBJSCLIENT	=	$(SRCSCLIENT:.c=.o)

LIBMY		=	-lmy -Llib/

$(NAMESERV) : $(OBJSSERV) $(NAMECLIENT)
	@echo ""
	@echo -e "\033[2mStarting...\033[0m" "\033[32m OK \033[0m"
	@echo ""
	$(LIB)
	@echo ""
	@echo -e "\033[2mUpdating lib files...\033[0m" "\033[32m OK \033[0m"
	@echo ""
	$(CC) -o $(NAMESERV) $(SRCSSERV) $(LIBMY)
	@echo ""
	@echo -e "\033[2mCompiling server files...\033[0m""\033[32m OK \033[0m"
	@echo ""	

$(NAMECLIENT): $(OBJSCLIENT)
	@echo ""
	@echo -e "\033[2mStarting...\033[0m" "\033[32m OK \033[0m"
	@echo ""
	$(LIB)
	@echo ""
	@echo -e "\033[2mUpdating lib files...\033[0m" "\033[32m OK \033[0m"
	@echo""
	$(CC) -o $(NAMECLIENT) $(SRCSCLIENT) $(LIBMY)
	@echo""
	@echo -e "\033[2mCompiling client files...\033[0m""\033[32m OK \033[0m"
	@echo""

all:	 $(NAMESERV) $(NAMECLIENT)

clean:
	@echo ""
	make clean -C lib/
	@echo ""
	@echo -e "\033[2mCleaning lib :\033[0m""\033[32m OK \033[0m"
	@echo ""	
	$(RM) $(OBJSSERV)
	$(RM) $(OBJSCLIENT)
	@echo ""	
	@echo -e "\033[2mCleaning all OBJS :\033[0m""\033[32m OK \033[0m"
	@echo ""	

fclean:	clean
	@echo ""
	make fclean -C lib/
	@echo ""
	@echo -e "\033[2mFcleaning lib :\033[0m""\033[32m OK \033[0m"
	@echo ""
	$(RM) $(NAMESERV)
	$(RM) $(NAMECLIENT)
	@echo ""
	@echo -e "\033[2mFcleaning exe :\033[0m""\033[32m OK \033[0m"
	@echo ""

re:	fclean all
	@echo ""
	@echo -e "\033[2mFcleaning all :\033[0m""\033[32m OK \033[0m"
