#include <iostream>
#include <assert.h>
#include <stdio.h>
#include "Need.h"
#include "Tamagochi.h"
#include "Needs_container.h"
#include "Game.h"
#include <chrono>

//game loop from https://gist.github.com/mariobadr/673bbd5545242fcf9482
//on MIT license


void Game::run()
{


    constexpr std::chrono::nanoseconds timestep(160000000);

        using clock = std::chrono::high_resolution_clock;

        std::chrono::nanoseconds lag(0);
        auto time_start = clock::now();

        while(!endGame())
        {
            auto delta_time = clock::now() - time_start;
            time_start = clock::now();
            lag += std::chrono::duration_cast<std::chrono::nanoseconds>(delta_time);

            //quit_game = handle_events();

            // update game logic as lag permits
            while(lag >= timestep)
            {
                lag -= timestep;

                //previous_state = current_state;

                update(); // update at a fixed rate each time
                render();
            }

            // calculate how close or far we are from the next timestep
        }
        getchar();
    }
