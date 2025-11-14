from functools import lru_cache


def main():
    command_list = {}
    commands = "NSWEUD"
    for x in commands:
        command_list[x] = input()
    command, param = input().split()
    param = int(param)

    @lru_cache(maxsize=None)
    def use_instruction(instruction: str, param:int):
        if param == 0:
            return 0
        total = 1
        rule = command_list[instruction]
        for cmd in rule:
            total += use_instruction(cmd, param - 1)
        return total

    print(use_instruction(command, param))


if __name__ == '__main__':
    main()
