#                                                    2021
#                                     w 8
#         .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
#         8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
#         `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP

NAME = baconian
NAMEBIN = baconian

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:%.c=%.o)))
INC_FILES = $(wildcard $(INC_DIR)/*.h)

CC = clang
CFLAGS = -std=c11 $(addprefix -W, all extra error pedantic) -g \

AR = ar
AFLAGS = rcs

MKDIR = mkdir -p
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(AR) $(AFLAGS) $@ $^
	@$(CC) $(CFLAGS) $(CFLAGS) $@ $^ -o $(NAMEBIN)
	@printf "\r\33[2K$@\t \033[32;1mcreated\033[0m\n"

$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)
	@printf "\r\33[2K$(NAME)\033[33;1m\t compile \033[0m$(<:$(SRC_DIR)/%.c=%)\r"

$(OBJ_DIR):
	@$(MKDIR) $@

run: all
	$(CC) $(C_FLAGS) *.c $(NAME) -I $(INK_DIR)
	./baconian.a

clean:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(NAME)
	@$(RM) $(NAMEBIN)
	@@printf "$(OBJ_DIR) in $(NAME)\t \033[31;1mdeleted\033[0m\n"

uninstall:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(NAME)
	@$(RM) $(NAMEBIN)
	@@printf "$(NAME)\t \033[31;1muninstalled\033[0m\n"

reinstall: uninstall all

.PHONY: all uninstall clean reinstall
