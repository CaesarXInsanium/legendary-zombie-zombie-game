"""
This file will be used in order to define the architecture of the game
"""
def define_var(*args):
    for item in args:
        print(f"Defined: %", item)
# Here we define some important definitions
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600
class PlayerPosition:
    x = 0
    y = 0
class draw_h:
    @staticmethod
    def draw_frame():
        # draws circle for now
        print("Drawing Frame")
        pass
class game_h:
    @staticmethod
    def run_frame():
        print('Running Game Frame')
        pass
class entity_h:
    define_var(
        
    )

class player_h:
    pass

def main():
    is_game_end = False
    while not is_game_end:
        game_h.run_frame()
        draw_h.draw_frame()
    pass

main()
