def find_day_winner(teams):
    teams_list = teams.split()
    teams_wins = dict()

    for team in teams_list:
        if team not in teams_wins.keys():
            teams_wins[team] = 1
        else:
            teams_wins[team] += 1

    max_wins = max(teams_wins.values())
    final_wins = [key for key, value in teams_wins.items() if value == max_wins]

    return 'Tie' if len(final_wins) > 1 else final_wins[0]


print(find_day_winner('Team1 Team2 Team2'))
