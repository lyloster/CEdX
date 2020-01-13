team_1 = "Georgia Tech"
team_1_score = 28
team_2 = "Georgia"
team_2_score = 27

#You may modify the lines of code above, but don't move them!
#When you Submit your code, we'll change these lines to
#assign different values to the variables.

#Above we've created four variables: two team names and two
#scores. A team wins if their score is greater than the other
#team's score.
#
#Add to the code below. To print a messages like these
#depending on the values:
#
# - If one team beat the other, print:
#     "[winner] beat [loser] by [margin]"
# - If neither team won, print:
#     "[team_1] played [team_2] and it was a tie"
#
#For example, with the original values in this code, you
#should print "Georgia Tech beat Georgia by 1"
#
#Hint: to make this easier, create three variables: winner,
#loser, and margin. Then, find their values before worrying
#about printing the final message.


#Add your code here!
draw = True
if team_1_score > team_2_score:
    winner =  team_1
    loser = team_2
    margin = team_1_score - team_2_score
    draw = False
elif team_2_score > team_1_score:
    winner = team_2
    loser = team_1
    margin = team_2_score - team_1_score
    draw = False

if not draw:
    print("%s beat %s by %d" %(winner, loser, margin))
    # doesn't compile for some reason written this way:
    #print(winner + " beat " + loser + " by " + margin)
else:
    print("%s played %s and it was a tie" %(team_1, team_2))
    #print( team_1 + " played " + team_2 + " and it was a tie")